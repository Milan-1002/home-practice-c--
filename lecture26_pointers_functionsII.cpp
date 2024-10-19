#include<iostream>
using namespace std;

void print(int *p){
    cout <<"this will print address " <<  p << endl;
    cout << "this will print value " << *p << endl;

}

void update(int **p){

// this will update the address
    *p = *p + 1;

// this will update the value
 //  *p = *p + 1;

}


int main()
{
    int value = 5;
    int *p = &value;
    print(p);

    cout << "this is before update " << p << endl;
    update(&p);

    cout << "this is after update " << p << endl;


// float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << " " << f << " " << p;



    return 0;
}