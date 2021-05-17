#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000000

int a[max];
char str[max][102];

    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void maxHeapify(int *array, int root, int length)
    {

        int left = 2 * root;
        int right = 2 * root + 1;
        int largest;

        if (left <= length && array[left] > array[root])//比較子節點跟父節點大小
        {
            largest = left;
        }
        else
        {
            largest = root;
        }
        if (right <= length && array[right] > array[largest])
        {
            largest = right;
        }

        if (largest != root)//如果最大的不是跟節點就交換再做一次調整
        {
            swap(&array[largest], &array[root]);
            maxHeapify(array, largest, length);
        }
    }

    void BuildmaxHeap(int *arr)//建立一個maxheap
    {
        for (int i = (max + 1) / 2; i >= 1; i--)//i從最下面有可能有子節點的地方開始
        {
            maxHeapify(arr, i, max);
        }
    }

    void HeapSort(int *array)
    {
        BuildmaxHeap(array);
        int size = max;
        for (int i = size; i >= 2; i--)//交換 heap 的 root 與最後一個 node，縮小 heap 的範圍
        {
            swap(&array[1], &array[i]);
            size--;
            maxHeapify(array, 1, size);
        }
    }

    char str[max][102];

    void str_swap(char *str1_ptr, char *str2_ptr)
    {
        char temp[102];
        strcpy(temp, str1_ptr);
        strcpy(str1_ptr, str2_ptr);
        strcpy(str2_ptr, temp);
    }

    void maxHeapify(char str[max][102], int root, int length)
    {

        int left = 2 * root;
        int right = 2 * root + 1;
        int largest;

        if (left <= length && (strcmp(str[left], str[root]) > 0))
        {
            largest = left;
        }
        else
        {
            largest = root;
        }
        if (right <= length && (strcmp(str[right], str[largest]) > 0))
        {
            largest = right;
        }

        if (largest != root)
        {
            str_swap(str[largest],str[root]);
            maxHeapify(str, largest, length);
        }
    }


    void str_heapsort(char str[max][102])
    {
           for (int i = (max + 1) / 2; i >= 1; i--)
        {
            maxHeapify(str, i, max);
        }
        
        BuildmaxHeap(str);
        int size = max;
        for (int i = size; i >= 2; i--)
        {
            str_swap(str[1],str[i]);
            size--;
            maxHeapify(str, 1, size);
        }
    }


