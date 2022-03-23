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
    for(int i = 0; i <length; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j]> arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    std::cout<<std::endl;
    std::cout<<"After Sorting"<<std::endl;
    for(int i = 0; i < length; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}