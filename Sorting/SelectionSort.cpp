#include <iostream>

int main()
{
    int arr[] = {5,2,23,21,3,45,3,1};
    int length = sizeof(arr)/sizeof(*arr);
    std::cout<<"Before Sorting"<<std::endl;
    for(int i = 0; i < length; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    for(int i = 0; i < length-1; i++)
    {
        int min = i;
        for(int j = i + 1; j<length; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    std::cout<<std::endl;
    std::cout<<"After Sorting"<<std::endl;
    for(int i = 0; i < length; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
}