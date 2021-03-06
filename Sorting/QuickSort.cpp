#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j <= high-1; j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main()
{
    int arr[] = {5,2,23,21,3,45,3,1};
    int length = sizeof(arr)/sizeof(*arr);
    std::cout<<"Before Sorting:"<<std::endl;
    for(int i = 0; i < length; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"After Sorting:"<<std::endl;
    quickSort(arr,0,length-1);
    for(int i = 0; i < length; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}