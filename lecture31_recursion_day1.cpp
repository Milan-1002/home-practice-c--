#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n){

    // base case
    if(n==0)
        return 1;

    int smallProblem = factorial(n-1);
    int biggerProblem = n* smallProblem;

    return biggerProblem;
}

int power(int n){

    // base case
    if(n==0)
        return 1;

// recursive relation
    int small = power(n-1);
    int big = 2* small;

    return big;
}

// for printing numbers
void counting(int n){

    // base case
    if(n==0){
        return;
        
    }
    cout << n << endl;

    // RECURSIVE RELATION
    counting(n-1);
}

int main()
{

int n;
cin >> n;

// FOR FACTORIAL OF N:
// int ans = factorial(n);

// FOR 2^N:

// int ans = power(n);


// cout << ans;

// FOR COUNTING NUMBERS
counting(n);
    
    return 0;
}