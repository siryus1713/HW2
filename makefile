all: Quick_sort.c quicksort.o Merge_sort.c mergesort.o Heap_sort.c heapsort.o 
	gcc Quick_sort.c  Merge_sort.o  Heap_sort.o  -o main
	
merge_sort.o: mergesort.c mergesort.h
	gcc -c mergesort.c -o mergesort.o
	
heapsort.o: heapsort.c heapsort.h
	gcc -c heapsort.c -o heapsort.o
	
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c -o quicksort.o
	
clean: 
	rm -f a.out main
