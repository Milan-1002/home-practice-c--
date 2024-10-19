#include<iostream>
using namespace std;

int firstOccurance(int arr[] , int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }

       else if(key < arr[mid]){
        end = mid - 1;

        }
       else if(key > arr[mid]){
        start = mid + 1;

    }
    
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid]== key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }
    }
    return ans;
}

int totalOccurance(int arr[], int size, int key){
    int total_occurance = (lastOccurance(arr,size,key) - firstOccurance(arr,size,key)) + 1;

    return total_occurance;
}

// PEAK INDEX IN MOUNTAIN ARRAY:

int mountainArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return arr[start];
}

int sumOfAnArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int pivotIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int totalSum = sumOfAnArray(arr, size);

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int leftSum = sumOfAnArray(arr, mid);  // sum from 0 to mid-1
        int rightSum = totalSum - leftSum - arr[mid];  // sum from mid+1 to end

        if (leftSum < rightSum) {
            start = mid + 1;  // Move to the right half
        } else if (leftSum > rightSum) {
            end = mid - 1;  // Move to the left half
        } else {
            return mid;  // Found the pivot index
        }
    }
    return -1;  // No pivot index found
}

// OR
// O(N)

int pivotIndexForLoop(int arr[], int size){
    int totalSum = sumOfAnArray(arr, size);
    int leftSum = 0;
    for(int i = 0; i < size; i++){
        int rightSum = totalSum - leftSum  - arr[i];

        if(leftSum == rightSum){
            return i;

        }
        leftSum += arr[i];
    }
    return -1;
}


//3. FINDING PIVOT ELEMENT IN THE SORTED ROTATED ARRAY

int pivotRotatedArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[start]){
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

// BINARY SEARCH ALGORITHM

int binarySearchAlgorithm(int arr[], int start,int end, int key){
    

    while(start <= end){
        int mid = start + (end - start)/2;

         if(arr[mid]==key)
        return mid;
        if(key > arr[mid]){
            start = mid + 1;;
        }
        else{
            end = mid-1;
        }
        
    }
    return -1;
}


// 4. SEARCH TARGET ELEMENT IN ROTATED SORTED ARRAY

int pivotFindPosition(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int pivot_index = pivotRotatedArray(arr,size);
    if(key >= arr[pivot_index] && key <= arr[end]){
        return binarySearchAlgorithm(arr, pivot_index, end, key);
    }
    else{
        return binarySearchAlgorithm(arr,0,pivot_index-1,key);
    }
    
}

int main()
{
    //int arr[6] = {1,2,2,3,3,3};

  //  cout << totalOccurance(arr, 6, 2);
//    pair < int, int > p;
//    p.first = firstOccurance(arr, 6,3);
//    p.second = lastOccurance(arr, 6,3);

//    cout << p.first ;
//    cout << endl;
//    cout << p.second;

// FOR INDEX IN MOUNTAIN ARRAY:
// int arr[4] = {3,4,5,1};
// cout << mountainArray(arr,4);

// FOR PIVOT IN AN ARRAY

// int nums[3] = {1,2,3};
// cout << pivotIndex(nums, 3) << endl;
// cout << pivotIndexForLoop(nums, 3);

// 3. FOR PIVOT ROTATED ARRAY
int arr[5] = {7,9,1,2,3};
//cout <<"The pivot index is "<< pivotRotatedArray(arr,5) << endl;
cout <<"The index of the required element is: " << pivotFindPosition(arr,5,6);


    
}


   



