all: quicksort mergesort heapsort

	
mergesort.o: mergesort.c mergesort.h
	gcc -c mergesort.c
	
heapsort.o: heapsort.c heapsort.h
	gcc -c heapsort.c
	
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c
	
	
	
clean: 
	rm -f a.out main
