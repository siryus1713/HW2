#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000000

int a[max];

    void int_merge(int arr[], int l, int m, int r)
    {
        int i = 0, j = 0, k = l;
        int n1 = m - l + 1;
        int n2 = r - m;

        int *L = malloc(sizeof(int) * n1);
        int *R = malloc(sizeof(int) * n2);

        for (i = 0; i < n1; i++) //copy data
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        i=j=0;
        while (i < n1 && j < n2) //merge
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
        free(L);
        free(R);
    }


    void int_mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2; // Sort first and second halves
            int_mergeSort(arr, l, m);
            int_mergeSort(arr, m + 1, r);
            int_merge(arr, l, m, r);
        }
    }



char str[max][102];
char Ls[max / 2 + 1][102];
char Rs[max / 2 + 1][102];


    void str_merge(char str[max][102], int l, int m, int r)
    {
        int i = 0, j = 0, k = l;
        int n1 = m - l + 1;
        int n2 = r - m;

        for (; i < n1; i++)
        {
            strcpy(Ls[i], str[l + i]);
        }

        for (; j < n2; j++)
        {
            strcpy(Rs[j], str[m + 1 + j]);
        }

        i = j = 0;
        while (i < n1 && j < n2)
        {
            if (strcmp(Ls[i], Rs[j]) < 0)
            {
                strcpy(str[k++], Ls[i++]);
            }
            else
            {
                strcpy(str[k++], Rs[j++]);
            }
        }

        while (i < n1)
        {
            strcpy(str[k++], Ls[i++]); //arr[k] = L[i];
        }

        while (j < n2)
        {
            strcpy(str[k++], Rs[j++]); // arr[k] = R[j];
        }
    }

    void str_mergeSort(char str[max][102], int l, int r)
    {
        if (l < r)
        {
            int m = (r + l) / 2; // Sort first and second halves
            str_mergeSort(str, l, m);
            str_mergeSort(str, m + 1, r);
            str_merge(str, l, m, r);
        }
    }
