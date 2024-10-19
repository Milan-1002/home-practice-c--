#include<iostream>
#include<vector>
using namespace std;

// FUCTION TO PRINT AN ARRAY
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

// SWAP ALTERNATE ARRAYS
void swapAlternateArr(int arr[], int size){
for(int i = 0; i< size-1; i+=2){
    swap(arr[i], arr[i+1]);

}

}

// FIND UNIQUE ELEMENT IN THE ARRAY
int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

// // UNIQUE OCCURANCE OF THE ELEMENT
// bool uniqueOccurance(int arr[], int size){
//     int count = 0;
//     for(int i = 0; i<size; i++){
//         if()
//     }


// }

int findDuplicate(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1;i < size;i++){
        ans = ans^i;
    }
    return ans;
}

// void tripletArray(int arr[]){
// int n = 5;
// int K = 12;
//  for(int i = 0; i < n; i++){
// 	for(int j = i+1; j < n; j++){
// 		for(int k = j+1; k < n; k++){
// 			if(arr[i]+arr[j]+arr[k]==K){
// 				cout << i << " " << j << " " << k << endl;
// 			}
// 		}
//     }
//  }
// }

// SORTING 0'S AND 1'S

void sortZeroAndOne(int arr[], int size){
    // let's make zeros in left side and 1's in right side
    int i = 0;
    int j = size -1;
   
    while(i<=j){
        if(arr[i] == 0){
            i++;
        }
        else if (arr[j]==1) 
        {
            j--;
        }
        else if(arr[i]==1 && arr[j]== 0){
            swap(arr[i], arr[j]);
        }
        

        


    }
}

void sortZeroOneTwo(int arr[], int size){
    int start = 0;
    int mid = 0;
    int end = size -1;
    while(mid <= end){
        if(arr[mid]== 1){
            mid++;
        }
        else if(arr[mid]== 0){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }
        else if(arr[mid]== 2){
            swap(arr[mid],arr[end]);
            end--;
        }

    }
     
}


int main()
{

int size;
cout << "Enter the size of size of array" << endl;
cin >> size;
int arr[size];

for(int i = 0; i< size; i++){
    cin >> arr[i];
}

// swapAlternateArr(arr, size);

 sortZeroOneTwo(arr, size);

 printArray(arr, size);


}




