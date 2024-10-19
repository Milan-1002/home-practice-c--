#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    // SELECTION SORT
    int size = 5;
    int arr[5] = {10,5,2,9,8};
    selectionSort(arr,size);

   // printing the array 
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }

    


}