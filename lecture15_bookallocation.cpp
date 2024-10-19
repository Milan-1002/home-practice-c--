#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool ifPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;    


}

int bookAllocation(int arr[], int n, int m){
    int start = 0;
    int end = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
     end = sum;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(ifPossible(arr,n,m, mid )){
            ans = mid;
            end = mid - 1;
        }
        else{

            start = mid + 1;
        }
    }
    return ans;
}

// AGGRESIVE COWS PROBLEMS

bool isPossible(vector <int> &stalls, int k, int mid){
    int cowsCount = 1;
    int lastPos = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i]- lastPos >= mid){
            cowsCount++;
            if(cowsCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
        
    }
    return false;

}

int aggresiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);

    }
    int end = maxi;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
    }
    return ans;


}
  bool ifPossible(vector<int>& nums, int maxOperations, int mid){
        int opCount = 1;
        for(int i = 0; i < nums.size(); i++){
            if(mid <= nums[i]){
                nums[i] = nums[i] - mid;
                opCount++;

            }
            if(opCount <= maxOperations){
                return true;
            }
            else{
                return false;
            }
        }
    }


    int minimumSize(vector<int>& nums, int maxOperations) {
        int start = 0;
        int maxi = 0;
        for(int i = 0; i< nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int end = maxi;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(ifPossible(nums,maxOperations,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
        
    }

int main()
{
  vector<int> stalls = {2,4,8,2};
    int k = 4;
    cout << minimumSize(stalls, k) << endl;

}