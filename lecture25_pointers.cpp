#include<iostream>
using namespace std;
int main()
{

    int num = 5;
    cout << num << endl;

    // address of operator - &

    cout << "address of num is: " << &num << endl;

    int *ptr = &num;

    // it will gonna print address of ptr which is address of num
    cout<< "value without *(deference operator) is: " << ptr << endl;

    // it will gonna print value of ptr which is value of num
    cout<< "value with *(deference operator) is: " << *ptr << endl;
    
    double d = 4.3;
    double *p2 = &d;

    // it will gonna print address of ptr which is address of d
    cout<< "value without *(deference operator) is: " << p2 << endl;

    // it will gonna print value of ptr which is value of d
    cout<< "value with *(deference operator) is: " << *p2 << endl;
    
    char ch = 'a';
    char *p3 = &ch; 

    string str = "Milan Sunar";
    string *p4 = &str;

    cout << "size of int pointer: " << sizeof(ptr) << endl;
    cout << "size of double pointer: " << sizeof(p2) << endl;
    cout << "size of char pointer: " << sizeof(p3) << endl;
    cout << "size of string pointer: " << sizeof(p4) << endl;



    return 0;
}