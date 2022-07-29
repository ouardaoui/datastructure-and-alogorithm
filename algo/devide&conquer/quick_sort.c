#include<stdio.h> 

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        if (i < j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int *a,int low,int high)
{
    if (low < high)
    {
        int pivot = partition(a, low, high);
        quick_sort(a, low, pivot - 1);
        quick_sort(a, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {3,2,4,5,1,6};
    int size = sizeof(arr)/sizeof(int);
    quick_sort(arr,0,size - 1);
    for(int i = 0; i<size;i++)
        printf("%d\n",arr[i]);
}