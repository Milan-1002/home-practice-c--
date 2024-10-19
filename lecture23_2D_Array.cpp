#include<iostream>
#include<vector>
using namespace std;

void rowWiseSum(int arr[][3]){
    for(int i = 0; i< 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout<< "sum of row " << i+1 << " is: " << sum << endl;
    }
}
int largestRowSum(int arr[][3]){
    int largest = 0;
    int largest_Row_index;
    for(int i = 0; i< 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        if(sum > largest){
            largest = sum;
            largest_Row_index = i;

        }
    }
    return largest_Row_index;
}

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector <int > waveArr;
        for(int i = 0; i< mCols; i++){
            if(i %2 == 0){
            for(int j = 0; j < nRows; j++){
                waveArr.push_back(arr[j][i]);
            }
            }
            else{
                for(int j = nRows-1; j >= 0; j--){
                    waveArr.push_back(arr[j][i]);
                }
            }
    }
    return waveArr;
    
        }

// ***********BINARY SEARCH IN 2D ARRAY************


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int end = row*col -1;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(matrix[mid/col][mid%col] == target){
                return 1;
            }
            else if(matrix[mid/col][mid%col] > target){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return 0;
        
    }

// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
//This matrix has the following properties:

//Integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.

     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int startRow = 0;
        int endCol = col -1;
        
         while(startRow < row && endCol >= 0) {

            if(target == matrix[startRow][endCol]){
                return 1;
            }
            if(target > matrix[startRow][endCol]){
                startRow++;
            }
            else{
                endCol--;
            }
            }
        
       return 0; 
    }



int main()
{
    // // creating 2d array
    // int arr[3][3];
    // cout<< "Enter the element" << endl;
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    //  for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout <<  arr[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    // rowWiseSum(arr);
    // cout << "The largest row index is: " << largestRowSum(arr);

        int nRows = 3, mCols = 3;
    vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave Print of the given array is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}