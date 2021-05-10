#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000000

int a[max];

    void int_merge(int arr[], int l, int m, int r);
    
    void int_mergeSort(int arr[], int l, int r);

char str[max][102];
char Ls[max / 2 + 1][102];
char Rs[max / 2 + 1][102];

    void str_merge(char str[max][102], int l, int m, int r);
   
    void str_mergeSort(char str[max][102], int l, int r);
 
