#include<iostream>
using namespace std;
int main()
{

    // pointer to int is created, and pointing to some garbage address
    // int *p = 0;

    // this is one way of initialize the pointer
    // int i = 5;
    // int *q = &i;

    // cout << q << endl;
    // cout << *q << endl;

    // // Another way of initialize the pointer
    // int *p = 0;
    // p = &i;

    // cout << p << endl;
    // cout<< *p << endl;
    

    int num = 5;
    int a = num;
    a++;
    cout << "before " << num << endl;

    int *p = &num;
    (*p)++;
    p = p+1;
    cout << "value of next p: " << p << endl;
    cout << "after " << num << endl;

// copying a pointer to new pointer

int *q = p;
cout<< "p " << p << "-" << "q " << "-" << q << endl;
cout<< "*p " << *p << "-" << "*q " << "-" << *q << endl;


    return 0;
}