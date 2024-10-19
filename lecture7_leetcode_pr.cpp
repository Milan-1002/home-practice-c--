#include<iostream>
using namespace std;
int main()
{
// //Q.1.  REVERSE INTEGER
// int n;
// cin >> n;
// int digit;
// int answer = 0;
// while(n!=0){
//     digit = n%10;
//     if((answer < INT_MIN/10) || (answer > INT_MAX/10)){
//         cout << "0";
//     }
//     answer = (answer*10) + digit;
//     n = n/10;
// }
// cout << answer;

// Q.NO.2. COMPLEMENT OF BASE 10 INTEGER

// int n;
// cin >> n;
// int m = n;
// int mask = 0;
// int ans;
// if(n==0){
//     cout << "1";
// }
// while(m!=0){
//     mask = mask << 1;
//     mask = mask | 1;
//     m= m >> 1;
// }
// ans = mask & (~n);
// cout << ans;


//Q.NO.3 POWER OF 2
int n;
cin >> n;
int m = (n & (n-1));
if(m == 0){
    cout << "it is a power of 2" << endl;
}
else{
    cout << "it is not a power of 2" << endl;
}


}

 
