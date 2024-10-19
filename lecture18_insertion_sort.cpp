#include<iostream>
using namespace std;


void insertionSortAlgorithm(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];

            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{ 
    int size = 7;
    int arr[7] = {10,1,6,4,8,2,11};
    insertionSortAlgorithm(arr,7);

      // printing the array 
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }




}