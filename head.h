#pragma once
#include <stdlib.h>

long long int dim;
void load_matrix(long long int*);
void mnr(long long int*); //mnr = Minimal Route 
void* worker(void*);
void solver();
int file_descriptor;
FILE* file;
int semaforo_mutex;
int semaforo_app;
void print_mtrx(long long int*);

