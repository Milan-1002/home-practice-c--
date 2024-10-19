#include<iostream>
using namespace std;

 int fib(int n) {

        // base case
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        // recursive relation
        int ans = fib(n-1) + fib(n-2);
        return ans;
        
    }

    void sayDigit(int n, string arr[]){

        // base case
        if(n==0){
            return ;
        }

        // processing
        int digit = n%10;
        n = n/10;

        // recursive call
        sayDigit(n, arr);
        cout << arr[digit] << " ";

    }

int main()
{



int n;
cin >> n;

// for(int i = 0; i < n; i++){
//     cout << fib(i) << " ";

// }
// FOR THE QUESTION SAY DIGIT

string arr[10] = {"zero", "one","two","three",
                "four","five","six",
                "seven","eight","nine",};

sayDigit(n,arr);

    return 0;
}