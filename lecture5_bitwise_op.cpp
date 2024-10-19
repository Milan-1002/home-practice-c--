#include <iostream>
#include <math.h>
using namespace std;

int main(){

// int a = 4;
// int b = 6;
//  cout << (a&b) << endl;
//  cout << (17>>1) << endl;
//  cout << (17>>2) << endl;
//  cout << (19<<1) << endl;
//  cout << (21<<2) << endl;

//  FIBONACCI SERIES:

// int n;
// cin >> n;
// int num1 = 0;
// int num2 = 1;
// int nextNum;
//cout << num1 << " " << num2 << " ";
// for(int i = 2; i <=n;i++){
//     nextNum = num1+num2;
//     cout << nextNum << " ";
//     num1 = num2;
//     num2 = nextNum;
// }


// CHECK PRIME NUMBER

// int n; 
// cin >> n;
// for(int i = 2; i<n; i++){
//     if(n%i ==0){
//         cout << "it is not a prime number"<< endl;
//         break;
//     }
//     else{
//         cout << "it is a prime number" << endl;
//         break;
//     }
// }

// for(int i = 0; i <= 15; i+=2){
//     for(int j =i; j<=5; j++){
//         if( i+j == 10){
//             break;
//         }
//         cout << i << " " << j <<endl;
//     }
// }
// }

// Q.1(L) ENTER A NUMBER AND CALCULATE THE DIFFERENCE OF PRODUCT AND SUM OF EACH DIGITS

// int n;
// cin >> n;
// int prod = 1;
// int sum = 0;
// while(n!=0){
//     int digit = n% 10;
//     prod = digit * prod;
//     sum = sum + digit;
//     n = n/10;
// }
// int result = prod - sum;
// cout << result;

// count how many 1's in a number
// int n;
// cin >> n;
// int count = 0;
// while(n!= 0){
//    // checking last bit
//    if(n&1){
//     count++;
//    }
//    n = n>>1;  // right shift by 1

// }
// cout << count;


// CONVERT DECIMAL NUMBER INTO BINARY NUMBER
// int n;
// cin >> n;
// int bit;
// int i = 0;
// int reverse = 0;
// while(n!=0){   
//   bit = (n&1);   // CHECKING FOR EACH BIT
//   reverse = (bit*pow(10,i)+ reverse);  // REVERSING 
//   n=n>>1;   // RIGHT SHIFT BY 1
// i++;
// }
//   cout << reverse;


// CONVERTING NEGATIVE NUMBER INTO BINARY
// int n;
// cin >> n;
// int bit;
// int i= 0;
// int binary_num = 0;
// while(n!=0){
//   bit = (n&1);
//   binary_num = (bit*pow(10,i)+binary_num);
//   n = n>>1;
//   i++;
// }
// binary_num = (~binary_num);
// binary_num += 1;
// cout << binary_num;


// CONVERTING BINARY OT DECIMAL
//  int n;
//  cin >> n;
//  int i = 0;
//  int digit;
//  int num = 0;
//  while(n!=0){
//  digit = (n%10);
//  if(digit == 1){
//   num = num + pow(2,i);
//  }
//  n = n/10;
//  i++;
//  }
//  cout << num;

}