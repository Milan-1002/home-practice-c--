#include<iostream>
using namespace std;

// SQUARE ROOT OF NUMBER USING BINARY SEARCH
// THIS FUNCTION ONLY GIVES INTEGER PART

int squareRoot(int num){
    int start = 1;
    int end = num;
   long long int ans = -1;
    while(start <= end){
         long long int mid = start + (end - start)/2;
       long long int  square = mid*mid;
        if(square == num){
            return mid;
        }
       
       else if(square < num){
             ans = mid;
            start = mid + 1;
        }
         else {
            end = mid - 1;
        }
        

        }
        return ans;
    }

// FUNCTION TO CALCULATE MORE PRECISISE SQUARE ROOT WITH DECIMAL

double sqrtPrecision(int num, int precision, int integerPart){
    int start = 1;
    double ans = 0;
    double squareRoot = 0;
    double decimal_part =1;
    while(start <= precision){

        decimal_part = decimal_part/10;
        
        squareRoot = integerPart + decimal_part;
        for(double i = squareRoot; i*i < num; i= i+ decimal_part){
            ans = i;
        }
        start++;

        

    }
    return ans;
}





int main()
{
    // FOR SQUARE ROOT OF NUMBER:

    int num;
    cout << "Enter the number" <<endl;
    cin >> num;
    int integerPart = squareRoot(num);
    cout << "The square root without decimal part is: " << integerPart << endl;
    cout << " the square root with decimal part is: " << sqrtPrecision(num, 5, integerPart);



}