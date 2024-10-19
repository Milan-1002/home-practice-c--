#include<iostream>
using namespace std;

// FUNCTION FOR CHECKING PALINDROME
bool checkPalindrome(string str, int i, int j){
    // base case

    if(i > j){
        return true;
    }
     if(str[i]!= str[j]){
        return false;
    }

    else{
       
       return checkPalindrome(str,i+1,j-1);
    }
}

int power(int a, int b){
    // base case

    if(b==0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    // recursive call 
    int ans = power(a, b/2);
    if(b % 2 == 0){
        return ans*ans;
    }
    else{
        return a * ans * ans;
    }
    
}






int main()
{
    string s = "rabbar";
   bool isPalindrome = checkPalindrome(s,0,s.length()-1);

   if(isPalindrome){
    cout << "it is palindrome" << endl;
   }
   else{
    cout << "it is not palindrome" << endl;
   }


    // for the power a^b

    int a, b;
    cout << "Enter the value of a and b" <<endl;
    cin >> a >> b;
    cout << "the result is: " << power(a,b);
}