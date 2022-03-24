#include <iostream>



int main()
{
    int arr[] = {1,4,6,2,7,9,7};
    int length = sizeof(arr)/sizeof(*arr);
    int target = 5;
    int counter = 0;
    for(int i = 0; i < length; i++)
    {
        if(arr[i] == target)
        {
            std::cout<<"Value: "<<target<<" found at index "<<i<<std::endl;
            counter++;
        }
        
    }
    if(counter == 0)
    {
        std::cout<<"Value not found!"<<std::endl;
    }  
}