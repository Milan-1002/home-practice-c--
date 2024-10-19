#include<iostream>
using namespace std;


void selectionSort(int arr[], int size){

    // will run till nth round
    for(int i = 1; i < size; i++){
        bool swaped = false;
        
        // process element till size-1th index
        for(int j = 0; j< size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        // already swaped
        if(swaped == false){
            break;
        }
    }
}



int main()
{
    int size = 5;
    int arr [5] = {5,3,9,6,1};
    selectionSort(arr,5);
     // printing the array 
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }

    
}