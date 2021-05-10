#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qsort.h"

#define max 1000000

    void int_swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
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


char str[max][102];

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
