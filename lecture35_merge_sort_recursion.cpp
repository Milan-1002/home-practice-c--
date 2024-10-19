#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
   int mid = s + (e - s)/2;

   int firstArrLen = mid-s+1;
   int secondArrLen = e-mid;

   int *first = new int[firstArrLen];
   int *second = new int[secondArrLen];

   int finalIndex = s;
   for(int i = 0; i < firstArrLen; i++){
    first[i] = arr[finalIndex++];
   }

   finalIndex = mid+1;
   for(int i = 0; i< secondArrLen; i++){
    second[i] = arr[finalIndex++];
   }

   // now merging two sorted arrays

  int index1 = 0;
  int index2 = 0;
  finalIndex = s;

  while(index1 < firstArrLen && index2 < secondArrLen){
    if(first[index1] < second[index2]){
        arr[finalIndex++] = first[index1++];   
    }
    else{
        arr[finalIndex++] = second[index2++];
    }
  }

  while(index1 < firstArrLen){
    arr[finalIndex++] = first[index1++];   

  }
  while(index2 < secondArrLen){
     arr[finalIndex++] = second[index2++];

  }

  delete[] first;
  delete[] second;
   
}
    

void mergeSort(int *arr, int s, int e){

    // base case
    if(s >= e){
        return;
    }

    // calculating mid
    int mid = s + (e - s)/2;

    // recursive call for the left part
    mergeSort(arr,s, mid);

    // recursive call for the right part
    mergeSort(arr, mid+1, e);

    // function to merge two sorted array

    merge(arr, s, e);
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int size = 5;

    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
