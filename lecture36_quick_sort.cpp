#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    
    int count = 0;
    // for counting all the element less than pivot in array
    for(int i = s+1; i <= e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < arr[pivotIndex]){
            i++;
        }
        while(arr[j] > arr[pivotIndex]){
            j--;
        }
    }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }

}


void quickSort(int *arr, int s, int e){
    // base case
    if(s >= e){
        return;
    }
// for partition array into two halves
   int p =  partition(arr, s, e);

    // for left part

    quickSort(arr, s, p-1);

    // for right part
    quickSort(arr, p+1, e);

}


int main()
{
    int arr[8] = {5, 4, 3, 2, 1,6,6,6};
    int size = 8;

    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}