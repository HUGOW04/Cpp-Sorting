#include <iostream>

void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    std::cout << array[i] << " " << std::flush;
  std::cout << std::endl;
}

void Merger(int arr[], int low, int  middle, int high){
    int *temp = new int[high-low+1];
    int i = low, j = middle + 1;
    int k = 0;
    while(i <= middle && j <=high){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= middle)
        temp[k++] = arr[i++];
    while(j <= high)
        temp[k++] = arr[j++];
    for(k = 0, i = low; i <= high; ++i, ++k)
        arr[i] = temp[k];

    delete []temp;
}
void MergeSortHelper(int arr[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high) >> 1;
        MergeSortHelper(arr, low, mid);
        MergeSortHelper(arr, mid+1, high);
        Merger(arr, low, mid, high);
    }
}
void MergeSort(int arr[], int arr_size){
    MergeSortHelper(arr, 0, arr_size-1);
}

int main() {
  int arr[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int length = sizeof(arr)/sizeof(*arr);

  std::cout << "Before Merge Sort :" << std::endl;
  PrintArray(arr, length);

  MergeSort(arr, length);

  std::cout << "After Merge Sort :" << std::endl;
  PrintArray(arr, length);
  return (0);
}
