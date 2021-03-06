#include "heapsort.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <string.h>

#define max 1000000

int a[max];
char str[max][102];

int main()
{
    //////////////////////////////int part
    
     struct timeval start;
     struct timeval end;
     
     freopen("dataset1.txt","r",stdin);
     for(int i=0;i<max;i++)
        scanf("%d\n",a[i]);
        
    gettimeofday(&start, NULL);
    HeapSort(a);
    gettimeofday(&end, NULL);
    
    long diff = max * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("heapSort for int is %ld\n", diff);
    
    
    ////////////////////string part
        
     struct timeval start;
     struct timeval end;
     
     freopen("dataset2.txt","r",stdin);
     for(int i=0;i<max;i++)
        scanf("%100s",str[i]);
        
    gettimeofday(&start, NULL);
    HeapSort(str);
    gettimeofday(&end, NULL);
    
    long diff = max * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("heapSort for strings is %ld\n", diff);
       
}
