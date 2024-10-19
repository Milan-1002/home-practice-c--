#include<iostream>
using namespace std;
int main()
{

// int arr[10] ={2,2,3,4,5,6,7,8,9,10};

// // the name of the array will print the address of the first block
// cout << "The address of the first block " << arr << endl;

// cout << "The address of the first block " << &arr[0] << endl;

// // this will print the value stored in arr address
// cout << "4th " << *arr << endl;

// // this will print the value after the *arr (next element)
// cout << "5th " << *arr+1 << endl;

// cout << "6th " << *(arr+1) << endl;
// cout << "7th " << *arr+2 << endl;

// //*(arr) + 1 and *arr+1 are same
// cout << "8th " << *(arr) + 1  << endl;

// // this is also valid
// cout << "9th " << 1[arr] << endl;

// int *ptr = &arr[0];
// cout << "1st " << sizeof(arr) << endl;
// cout << "2nd " << sizeof(*ptr) << endl;
// cout << "3rd " << sizeof(ptr) << endl;
// cout << "4th " << sizeof(&ptr) << endl;  //same as sizeof(ptr)
  
// this two will have different address
//  int a[20] = {1,2,5,4};
// this is the address of first index in the array
//   cout << "-->" << &a[0] << endl;

//   int *p = &a[0];
//   // this is the address of pointer p which stores address of a[0]
//   cout << "-->" << &p << endl;

int a[10] = {1,2};

// address of array cannot be reassigned so the following gonna 
// through error 

// error
// a = a+1;

int *ptr = &a[0];
cout <<"ptr " << ptr << endl;

// when we add 1 to the pointer this will gonna print the address of next
// element 
ptr = ptr + 1;
cout << "ptr+1 " << ptr << endl;


    return 0;
}