#include<iostream>
#include<vector>

using namespace std;


// ****** USING SIEVE OF ERASTOSTHENES TO FIND THE NUMBER OF PRIMES BETWEEN 1 TO N.
 int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);
        prime[0]=prime[1] = false;
        for(int i = 2; i< n; i++){
            if(prime[i]){
                count++;
                for(int j = i*2; j<n; j= j + i ){
                    prime[j] = false;
                }
            }
        }
        return count;

 }


// ************EUCLIDIAN ALGORITHM(GCD)

int gcd(int a, int b){
    while(b!= 0){
        int r = a%b;
        a = b;
        b = r;

    }
    return a;
}


    
int main()
{
    int a; 
    cin >> a;
    int b; 
    cin >> b;
    cout << gcd(a,b);
    


}