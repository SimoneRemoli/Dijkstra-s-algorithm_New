all: executable_dijkstra

executable_dijkstra: dijkstra.o mnr.o
	gcc -Wall -o executable_dijkstra dijkstra.o mnr.o
dijkstra.o: dijkstra.c
	gcc -c -Wall dijkstra.c
mnr.o: mnr.c
	gcc -c -Wall mnr.c
clean:
	rm dijkstra.o 
	rm mnr.o 
	rm executable_dijkstra
	rm graph.dot
	rm output.pdf
