#include<iostream>
#include<memory>

using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;

}



int main()
{
/*
int i = 5; 

// create a reference variable
int &j = i;

cout << i << endl;
cout << j << endl;
i++;
cout << i << endl;
j++;
cout << i << endl;



// creating a variable size array
int n; 
cin >> n;
// int arr[n];  // BAD PRACTICE

int *arr = new int [n];
for(int i = 0; i < n; i++){
    cin >> arr[i];      // arr[i] = *(arr + i)
}

int ans = getSum(arr, n);
cout << "Sum is: " << ans << endl; */


// **********practice question for reference variable***********

int *ptr = new int;
*ptr = 5;
cout << *ptr << endl;

delete ptr;
cout << *ptr << endl;


// creating single integer in dynamic memory using unique_ptr

unique_ptr<int>num(new int(10));
cout << *num << endl;


    return 0;
}