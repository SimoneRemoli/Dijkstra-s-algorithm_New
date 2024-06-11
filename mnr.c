#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>
#include "head.h"

void print_mtrx(long long int* ptr)
{
	for(long long int i=0;i<dim;i++)
	{
		for(long long int j = 0; j<dim; j++)
		{
			printf("\t %lld ", *(ptr + i*dim + j));
		}
		printf("\n");
		printf("\n");
	}
}

void solver(void)
{
	int ret;
	struct sembuf oper;
	semaforo_mutex = semget(IPC_PRIVATE, 1, IPC_CREAT|IPC_EXCL|0666);
	semctl(semaforo_mutex, 0, SETVAL, 1);
	semaforo_app = semget(IPC_PRIVATE, 1, IPC_CREAT|IPC_EXCL|0666);
	semctl(semaforo_app, 0, SETVAL, 0);

	oper.sem_num = 0;
	oper.sem_op = -1;
	oper.sem_flg = 0;
redo1:
	ret = semop(semaforo_mutex, &oper, 1);
	if(ret == -1)
		if(errno == EINTR)
			goto redo1;

	pthread_t tid;
	double d = 0.1;
	srand(time(0));
	file_descriptor = open("graph.dot",O_CREAT|O_RDWR|O_TRUNC, 0666);
	char *command = "dot -Tpdf graph.dot -o output.pdf";
	file = fdopen(file_descriptor, "w+");
	fprintf(file, "graph { ");
	fflush(file);
	fprintf(file, "\n");
	printf("\n");
	fputs(" ", stdout);
	fprintf(stdout, "Size of matrix row=column:\n");
	printf(">>");
	scanf("%lld",&dim);
	long long int* ptr = malloc(sizeof(long long int)*dim*dim);
	oper.sem_num = 0;
	oper.sem_op = 1;
	oper.sem_flg = 0;
redo3:
	ret = semop(semaforo_mutex, &oper, 1);
	if(ret == -1)
		if(errno == EINTR)
			goto redo3;
	pthread_create(&tid, NULL, worker, ptr);
	oper.sem_num = 0;
	oper.sem_op = -1;
	oper.sem_flg = 0;
redo6:
	ret = semop(semaforo_app, &oper, 1);
	if(ret == -1)
		if(errno == EINTR)
			goto redo6;

	print_mtrx(ptr);
	for(long long int i = 0; i<dim; i++)
	{
		for(long long int j = i + 1; j<dim; j++)
		{
			if((*(ptr + i*dim + j))!=-1)
			{
				fprintf(file, "%lld -- %lld[label=%lld, weight=%f color = red] \n", i,j,*(ptr + i*dim + j),d);
				fflush(file);
			}
		}
	}
	fprintf(file, "} \n");
	fflush(file);
	fclose(file);
	puts("File dot created. ");
	fputs("File png created. ", stdout);
	system(command);
	printf("Write on command line: open output.pdf \n");
	mnr(ptr);
}

void* worker(void* arg)
{
	struct sembuf oper;
	int ret;
	long long int* ptr = arg;
	while(1)
	{
		oper.sem_num = 0;
		oper.sem_op = -1;
		oper.sem_flg = 0;
redo2:
		ret = semop(semaforo_mutex, &oper, 1);
		if(ret == -1)
			if(errno == EINTR)
				goto redo2;
	load_matrix(ptr);

	oper.sem_num = 0;
	oper.sem_op = 1;
	oper.sem_flg = 0;
redo4:
	ret = semop(semaforo_app, &oper, 1);
	if(ret == -1)
		if(errno == EINTR)
			goto redo4;
	}
}
void load_matrix(long long int* ptr)
{
		srand(time(0));
		long long int* mat = malloc(sizeof(long long int)*dim*dim);
		for(int i=0;i<dim;i++)
		{
			for(int j=0;j<dim;j++)
			{
				if((rand()%10+1)%2==0)
					*(mat + i*dim + j) =-1;
				else
				{
					*(mat + i*dim + j)=rand()%20+1;
				}
			}
		}
		for(int i=0;i < dim;i++)
			*(mat + i*dim + i)=0;
		for (int i = 0; i < dim; i++)
		   for (int j = 0; j < dim; j++)
		      *(ptr + j*dim + i) = *(mat + i*dim + j);
		for (int i = 0; i < dim; i++)
			   for (int j = i+1; j < dim; j++)
			      *(ptr + i*dim + j) = *(mat + i*dim + j);
}
void mnr(long long int* ptr)//Minimal Route
{
		long long int cost[dim],conosciuti[dim];
		for(int i=0;i<dim;i++)
		{
			cost[i]=10000;
			conosciuti[i]=0;
		}
		int min;
		cost[0]=0;
		conosciuti[0]=1;
		int nodo_attuale = 0;
		int c = 0;
		for(int matrix_type = 0;matrix_type<dim;matrix_type++)
		{
			for(int i=0;i<dim;i++)
			{
				if((*(ptr + i*dim+nodo_attuale)!=-1)&&((*(ptr + i*dim+nodo_attuale)+cost[nodo_attuale])<cost[i]))
				{
					cost[i] = (cost[nodo_attuale]+ *(ptr + i*dim+nodo_attuale));
				}
			}
			min = 10000;
			for(int i=0;i<dim;i++)
			{
				if((cost[i]<min)&&(conosciuti[i]==0))
				{
					min = cost[i];
					c = i;
				}
			}
			conosciuti[c]=1;
			nodo_attuale = c;
		}
		printf("\n");
		for(long long int i=0;i<dim;i++) printf("Known node [%lld] =  %lld    Weight to reach the node [%lld]=  %lld  \n", i, conosciuti[i], i, cost[i]);
		return;
}
