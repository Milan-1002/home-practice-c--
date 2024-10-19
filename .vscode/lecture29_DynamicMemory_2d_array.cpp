#include<iostream>
using namespace std;



int main()
{
    int rows;
    cin >> rows;
    int col;
    

// creating 2d arrary in dynamic memory
int **arr = new int*[rows];
for(int i = 0; i< rows; i++){
    cout << "Enter col " << endl;
    cin >> col;
 arr[i] = new int[col];

}

// taking input 
for(int i = 0; i < rows; i++){
    for(int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
}

// printing output

for(int i = 0; i < rows; i++){
    for(int j = 0; j < col; j++){
        cout<<  arr[i][j] << " ";
    }
    cout << endl;
}

// releasing memory

for(int i = 0; i< rows; i++){
    delete [] arr[i];
    
}
delete[] arr;
    return 0;
}