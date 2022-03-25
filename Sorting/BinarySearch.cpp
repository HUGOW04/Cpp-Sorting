#include <iostream>
int binarySearch(int arr[], int low,int high, int target)
{
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]== target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
    
}

int main()
{
    int arr[100];
    int length = sizeof(arr)/sizeof(*arr);
    int target = 77;
    for(int i = 0; i < length; i++)
    {
        arr[i] = i+1;
    }
    int result = binarySearch(arr,0,length-1,target);
    if(result==-1)
    {
        std::cout<<"Element not found";
    }
    else
    {
        std::cout<<"Element found at index"<<result;
    }
    
    
}