#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end){
    int mid = start + (end - start)/2;

        if(arr[mid]== key){
            return mid;
        }

    // going to right
     
     if(key > arr[mid]){
        start = mid + 1;
         }

    else{
        end = mid - 1;
    }

    }
    return -1;
}


int main()
{

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarySearch(odd, 5,11);
    cout << index;
}