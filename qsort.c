#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <qsort.h>

#define max 1000000

 void int_swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }

void int_sort()
{

    int *a = malloc(sizeof(int) * max);
    int cnt = 0;
    FILE *fPtr = fopen("dataset1.txt", "r");
    char buffer[100];

    while (fgets(buffer, 100, fPtr))
    {
        a[cnt++] = atoi(buffer);
    }

   

    int int_partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int_swap(&arr[i], &arr[j]);
            }
        }
        int_swap(&arr[i + 1], &arr[high]);
        return (i + 1);
    }

    void int_quicksort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pi = int_partition(arr, low, high);
            int_quicksort(arr, low, pi - 1);
            int_quicksort(arr, pi + 1, high);
        }
    }

    gettimeofday(&start, NULL);
    int_quicksort(a, 0, max - 1);
    gettimeofday(&end, NULL);

    unsigned long dif = 1000000 * (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec);
    printf("qsort for int is %ld\n", dif);

    freopen("Qsort_int.txt","w",stdout);
    for(int i=0;i<max;i++)
    {
        printf("%d %d\n",i,a[i]);
    }
}

char str[max][102];

void str_sort()
{
    ////for time saving
    struct timeval start;
    struct timeval end;

    ////read the strings
    FILE *fp;
    fp = fopen("dataset2.txt", "r");

    int ctr = 0;
    while (fgets(str[ctr], 102, fp) != NULL)
    {
        ctr++;
    }
    fclose(fp);

    ////swap two string
    void str_swap(char *str1_ptr, char *str2_ptr)
    {
        char temp[102];
        strcpy(temp, str1_ptr);
        strcpy(str1_ptr, str2_ptr);
        strcpy(str2_ptr, temp);
    }

    int str_partition(char str[max][102], int low, int high)
    {
        char string[100];
        strcpy(string, str[high]);

        int i = low - 1;

        for (int j = low; j <= high - 1; j++)
        {
            if (strcmp(str[j], string) < 0)
            {
                i++;
                str_swap(str[i], str[j]);
            }
        }
        str_swap(str[i + 1], str[high]);
        return (i + 1);
    }

    void str_quicksort(char arr[max][102], int low, int high)
    {
        if (low < high)
        {
            int pi = str_partition(str, low, high);
            str_quicksort(str, low, pi - 1);
            str_quicksort(str, pi + 1, high);
        }
    }

 
}

