#include <stdlib.h>

#define max 1000000

void int_swap(int *a, int *b);

int int_partition(int arr[], int low, int high);

void int_quicksort(int arr[], int low, int high);

void str_swap(char *str1_ptr, char *str2_ptr);
   
int str_partition(char str[max][102], int low, int high);
   
void str_quicksort(char arr[max][102], int low, int high);
