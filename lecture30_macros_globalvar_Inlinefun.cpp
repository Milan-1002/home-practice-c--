#include<iostream>
using namespace std;

// #define PI 3.14      // creating macro of pi

inline int getMax(int &a, int&b){
    return (a>b) ? a:b;  // using tertiary operator
}

// ****** creating a multiline macro****

#define PRINT_RECTANGLE(width, height) \
for(int i = 0; i< height; i++){       \
    for(int j = 0; j < width; j++){   \
        cout<< "*";                   \
    }                                 \
    cout << endl;                     \
                                     \
}                                    \



int main()
{
    /*
int r = 5;
double area = PI * r *r;
cout << "Area is " << area <<endl;


// for inline function
int a = 1, b = 2; 
int ans = 0;

ans = getMax(a,b);
cout << ans << endl;

a = a + 3; 
b = b+1; 

ans = getMax(a,b);
cout << ans  << endl;

*/

PRINT_RECTANGLE(4,3);


// ****PREDEFINED MACROS*********

// display the current line number and the source fule
// name
cout << "this is line " << __LINE__ << " in file "<< __FILE__<< endl;
 
 // display the compilation date
 cout << "compiled on " << __DATE__ << endl;
 cout << "the time is: " << __TIME__ << endl;



    return 0;
}