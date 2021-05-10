all: Quick_sort.c quicksort.c quicksort.h Merge_sort.c mergesort.c mergesort.h Heap_sort.h heapsort.c heapsort.h
	gcc Quick_sort.c quicksort.c quicksort.h Merge_sort.c mergesort.c mergesort.h Heap_sort.h heapsort.c heapsort.h -o main

clean: 
	rm -f a.out main
