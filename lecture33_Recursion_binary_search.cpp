#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    // base case

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size - 1);
        return remainingPart;
    }
}

// TO FIND THE SUM OF THE ARRAY
 
 int arraySum(int arr[], int size){
    // base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int sum = arraySum(arr+1,size-1)+ arr[0];
    return sum;
 }

 // for linear search

 bool isFound(int arr[], int size, int key){
    // base case

    if(size == 0){
        return false;
    }
    
    if(key == arr[0]){
        return true;
    }else{
     // recursive call
     bool remainingPart = isFound(arr + 1, size-1, key);
     return remainingPart;

    }

 }

    //  Example 2: Print Array in reverse order using recursion.

    void reverseArray(int arr[], int size){
        // base condition
        if(size == 0){
            return ;

        }

        // processing

        cout << arr[size-1] << " ";

        // recursive case
        reverseArray(arr, size -1);
    }

    // FUCNTION TO REVERSE A STRING
    void reverseString(string str, int len){
    
        // base case

        if(len == 0){
            return;
        }

        // processing 
        cout << str[len-1];

        // recursive case


        reverseString(str, len -1);
    }

    // Problem: Write a recursive function to compute x raised to the power of n (i.e., x^n).

    int power(int x, int n){
        // base case
        if(n == 0){
            return 1;
        }
        // recursive case

        int ans =  x * power(x,n-1);
        return ans;
    }

    // Find Maximum Element in Array
    int findMaxElement(int *arr, int size){
        // base case
        if(size == 0){
            return 0;
        }

        // recursive case

        if(arr[0] > arr[1]){
            return arr[0];

        }
        findMaxElement(arr+1, size-1);
    }

    // FUNCTON FOR BINARY SEARCH
    int binarySearch(int *arr, int start, int end, int key){
        // base case

        if(start > end){
            return -1;
        }

        // calculating mid
        int mid = start + (end - start)/2;

        // comparing mid with the key
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
           return binarySearch(arr, mid + 1, end, key);
        }

        if(arr[mid] > key){
           return binarySearch(arr, start, mid-1, key);
        }
    }



int main()
{
//     // to see the given array is sorted or not

//     // int arr[5] = { 1, 2, 3,4,5};

//     // int size = 5;
//     /* int ans = isSorted(arr,size);

//     if(ans){
//         cout << "array is sorted " << endl;
//     }
//     else{
//         cout << "array is not sorted " << endl;
//     }

// // for the sum
//     cout << "sum is: " <<  arraySum(arr,size) << endl;
    

// // for linear search

// int key = 5;

// bool search = isFound(arr, size, key);

// if(search){
//     cout << "key is present " << endl;
// }
// else{
//     cout << "key is not present " << endl;
// }
// */

// // FOR PRINTING ARRAY IN A REVERSE ORDER

// int arr[5] = {2,3,4,5,6};

// int size = 5;
//  reverseArray(arr,size);

//  cout << endl;

//  // for printing string in reverse

//  string str = "my name is milan sunar";
//  int length = str.size();


//  reverseString(str, length);
//  cout << endl;


// // Problem: Write a recursive function to compute x raised to the power of n (i.e., x^n).

// int x = 2;
// int n = 4;
// cout << power(x,n);

// cout << endl;

// // for finding max element in the array

// int arr1[5] = {2,3,100,5,6};

// int size1 = 5;
// cout << " Max element is: " << findMaxElement(arr1, size1);

// FOR BINARY SEARCH

int arr2[6] = {2,3,4,5,33,44};

cout << "the index of the element is: " << binarySearch(arr2,0,5,44);




    return 0;
}