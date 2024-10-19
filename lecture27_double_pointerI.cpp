#include<iostream>
using namespace std;


int main()
{

    int i = 5; 
    int *p = &i;
    int **p2 = &p;

    cout << "address of i " << &i << endl;
    cout << "address of i " << p << endl;
    cout << "address of i " << *p2 << endl;

    cout << "Value of *p " << *p << endl;
    cout << "value of **p " << **p2 << endl;

    cout << "address of *p " << p2 << endl;

    int arr[6] = {11,23,43};
    int *ptr = arr;
    cout <<"arr: " <<  ptr[2] << endl;

    char ch[] = "abcde";
    char *chptr = &ch[0];

 // this is different in character array, when we only ask for print address without &, it prints the
 // whose character array, instead of printing the address of the first character
    cout << "character: " << chptr << endl;

    cout << "character1: " << *chptr << endl;

    // for printing the partial char array
    chptr++;
    cout << chptr+2 << endl;



    return 0;
}