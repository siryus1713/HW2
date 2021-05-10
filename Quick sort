#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "qsort.h"

#define max 1000000

int main()
{
    ////////////////////////int part
    struct timeval start;
    struct timeval end;
    int *nums=malloc(sizeof(int)*max);
    
    freopen("dataset.txt:,"r",stdin);
    for(int i=0;i<max;i++)
        scanf("%d\n",&nums[i]);

    gettimeofday(&start, NULL);
    int_quicksort(a, 0, max - 1);
    gettimeofday(&end, NULL);

    unsigned long dif = 1000000 * (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec);
    printf("qsort for int is %ld\n", dif);
    
    //////////////////////////str part
    
    struct timeval start;
    struct timeval end;
    char str[max][102];
    
    freopen("dataset2.txt","r",stdin);
     for(int i=0;i<max;i++)
        scanf("%100s",str[i]);
        
    gettimeofday(&start, NULL);
    str_quicksort(str,0,max-1)
    gettimeofday(&end, NULL);
    
    long diff = max * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("QuickSort for strings is %ld\n", diff);


}


