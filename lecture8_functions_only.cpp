#include<iostream>
using namespace std;

// FUNCTION TO TELL EVEN OR ODD
 
 bool evenOrOdd(int num){
    if(num%2 == 0){
        cout << "the number is even" << endl;
    }
    else{
        cout << "the number is odd" << endl;
    }
 }

 // FUNCTION TO CALCULATE nCr(combination of any number) of any number 
 // First we need a function to calculate factorial of a number

 int factorial(int n){
    int fact =1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
 }

 int nCr(int n, int r){
   
    int result;
    result = factorial(n) /( factorial(r)* factorial(n-r));
    return result;
 }

 // A.P (ARITHMATIC PROGRESSION) IS (3n + 7) find the nth term

 int ap(int n){
    int ans = 3 * n + 7;
    return ans;
 }

 // TO FIND A SET BIT(1) IN A GIVEN NUMBER

 int setBit(int n3){
    int count = 0;
    while(n3!=0){
        if(n3&1){
            count++;
        }
      n3 =  n3 >> 1;
    }
    return count;
 }

 // TO FIND THE nth TERM IN FIBONNACCI SERIES:

 int  fibonnacci(int n){
    int n1 = 0;
    int n2 = 1;
    int next_term = 0;
    // cout << n1 << " " << n2 << " ";
    for(int i = 0; i <= n-3; i++){
        next_term = n1 + n2;
        n1 = n2;
        n2 = next_term;
    }
     return next_term;
 }








int main()
{
    // int num;
    // cout << "please enter the number" << endl;
    // cin >> num;

    // int n, r;
    //  cout << "Enter the n" << endl;
    // cin >> n;
    // cout << "Enter the r" << endl;
    // cin >> r;
    // cout << nCr(n,r);

    // FOR AP
    //   int n1;
    //   cout << "Enter the n to find nth term" << endl;
    //   cin >> n1;
    //   cout << ap(n1);

    // FOR SET BIT:

    // int n3;
    // cout << "Enter the value of n3" << endl;
    // cin >> n3;
    // cout << setBit(n3);

    // FIBONNACCI SERIES:

    int n;
    cout << "Enter the value of n to find the nth term" << endl;
    cin >> n;
   cout << fibonnacci(n);


    


   

}