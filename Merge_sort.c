#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#define max 1000000

int a[max];

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
    mergesort(a,0,max-1);
    gettimeofday(&end, NULL);
    
    long diff = max * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("Mergesort for int is %ld\n", diff);
    
    
    ////////////////////string part
        
     struct timeval start;
     struct timeval end;
     
     freopen("dataset2.txt","r",stdin);
     for(int i=0;i<max;i++)
        scanf("%100s",str[i]);
        
    gettimeofday(&start, NULL);
    HeapSort(str,0,max-1);
    gettimeofday(&end, NULL);
    
    long diff = max * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("MergeSort for strings is %ld\n", diff);
       
}
