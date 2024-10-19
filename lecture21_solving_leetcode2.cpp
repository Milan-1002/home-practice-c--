#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ROTATE AN ARRAY

void rotateArray(vector<int> &v, int k){
    int n = v.size();
    vector<int>temp(n);
    for(int i = 0; i<n; i++){
        temp[(i+k)%n] = v[i];
    }
    v = temp;
}

// check if the arrray is rotated sorted array

bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n-1] > nums[0])
            count++;
            
        if(count <= 1){
            return 1;
        }else{
            return 0;
        }


        
    }

   #include <iostream>
#include <vector>
#include <algorithm> // for std::swap

using namespace std;

vector<int> reverseArray(vector<int> v) {
    int i = 0;
    int j = v.size() - 1;
    while (i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    return v;
}

// SUM OF TWO ARRAYS
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    int sum = 0;
    int carry = 0;
    vector<int> v;
    
    while (i >= 0 && j >= 0) {
        sum = a[i] + b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
        j--;
    }

    // Case where the first array is longer
    while (i >= 0) {
        sum = a[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
    }

    // Case where the second array is longer
    while (j >= 0) {
        sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        j--;
    }

    // Case where there's still a carry left
    while (carry != 0) {
        sum = carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
    }

    // Reverse the result array to get the correct order
    v = reverseArray(v);
    
    return v;
}

int main() {
    // FOR SUM OF TWO ARRAYS
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {6};

    vector<int> v = findArraySum(arr1, arr1.size(), arr2, arr2.size());

    // Print the result
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



     

    

 
