#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

// reverse using vector
vector<int> reverse(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

// MERGE TWO ARRAY SORTED ARRAY TO GET NEW SORTED ARRAY

void mergeSortedArray(int arr1[], int n, int arr2[], int m,int arr3[] ){
int i = 0;
int j = 0;
int k = 0;

while(i < n && j < m){
    if(arr1[i] < arr2[j]){
        arr3[k++] = arr1[i++];
       

    }
    else{
        arr3[k++] = arr2[j++];

    }
        
    }
    while(i < n){
        arr3[k++] = arr1[i++];
        
    }
    while(j < m){
        arr3[k++] = arr2[j++];
        
    }

}

// move zeros

void moveZeros(int arr[], int size){
    int i = 0;
    int j = 0;
    while(j < size){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
            
        }
        j++;
    }

}




int main()
{
// // basic 
//     int arr[5] = {1,2,3,4,5};
//     reverseArray(arr,5);

//     for(int i = 0; i<5; i++){
//         cout << arr[i] << " ";
//     }
    
    // using vector
    
    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);

    // vector<int> ans = reverse(arr);
    // print(ans);

// FOR MERGING SORTED ARRAY TO GET NEW SORTED ARRAY

// int arr1[5] = {1,3,5,7,9};
// int arr2[3] = {2,4,6};
// int arr3[8] = {0};

//  mergeSortedArray(arr1,5,arr2,3,arr3);
//  for(int i = 0; i < 8; i++){
//     cout<< arr3[i] << " ";
//  }

//  MOVE ZEROS TO THE END

int arr[7] = {2,0,1,3,0,0,0};
moveZeros(arr,7);

for(int i = 0; i < 7; i++){
     cout<< arr[i] << " ";




}
}