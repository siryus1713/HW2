all: main.c swap.o mergesort.o heapsort.o quicksort.o
	gcc main.c swap.o mergesort.o heapsort.o quicksort.o -o main

swap.o: swap.c swap.h
	gcc -c swap.c

mergesort.o: mergesort.c mergesort.h
	gcc -c mergesort.c
	
heapsort.o: heapsort.c heapsort.h
	gcc -c heapsort.c
	
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c

clean: 
	rm -f a.out main
