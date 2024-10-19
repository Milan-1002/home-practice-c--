#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    // to print the array
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

}

// FUNCTION TO FIND MAX AND MIN OF ANY ARRAY
void maxMinArr(int arr[], int size){
    int max = INT_MIN;  // this will store minimum value of int 
    int min = INT_MAX;  // this will store maximum value of int
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "max number is: " << max << endl;
    cout << "min number is: " << min << endl;
}


// FUNCTION TO PRINT SUM OF ALL THE ELEMENTS OF THE ARRAY
int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int Arr[9] = {4, 12,8,10,3,2,78,44,987};
 //   maxMinArr(Arr,9);

int size;
cout << "please enter the size of the array" << endl;
cin >> size;
int Arr2 [size];
for(int i = 0; i < size; i++){
    cin >> Arr2[i];
}

cout << "The sum of the each elements of the array is: " << sumOfArray(Arr2, size) << endl;
   


    
     
} 