#include<iostream>
#include<algorithm>
using namespace std;

// for passing char array we don't need the size
int getLength(char arr[]){
    int count;

// this will run till it find null character
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;

}

// 2. For reversing an string 
 void reverseString(char arr[], int length){
    int s = 0;
    int e = length -1;
    while(s < e){
        swap(arr[s++],arr[e--]);
    }

 }

 
//  char toLowerCase(char ch){
//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
//  }

 //3. check if the string is palindrome

    // bool checkPalindrome(char arr[], int length){
    //     int s = 0; 
    //     int e = length-1;
    //     while(s <= e){
    //         if(toLowerCase(arr[s])!= toLowerCase(arr[e])){
    //             return 0;
    //         }
    //         s++;
    //         e--;
    //     }
    //     return 1;

    // }

      bool validCh(char c){
        if((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ){
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
 }

 bool checkPalindrome(string str){
        int s = 0; 
        int e = str.length()-1;
        while(s <= e){
            if(str[s]!= str[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;

    }
 
    bool isPalindrome(string s) {
     string temp;
     for(int i = 0; i < s.length(); i++){
        if(validCh(s[i])){
            temp.push_back(s[i]);

        }
     }

     for(int i = 0; i < temp.length(); i++){
        temp[i] = toLowerCase(temp[i]);
     }

     // checking palindrome
     return checkPalindrome(temp);

    }

    // REVERSE WORDS IN STRING
    void reverseWord(string &s){
        int start = 0;
        int end = s.length()-1;
        while(start <= end){
            swap(s[start++],s[end--]);

        }
    }

    

 
int main()
{
//     char ch[20];
//     cout<< "Enter your name: " << endl;
//     cin >> ch;
    

// // whenever cin find null character it stops reading
//  //   ch[2] = '\0';   // this is called null character

    
//     cout<< "your name is: " << ch << endl;
//     int len = getLength(ch);
//     cout << "length: " <<len << endl;

//     reverseString(ch,len);
//     cout<< "String after reversing is: " << ch  << endl;

//     cout<< "The string is palindrome or not: " << checkPalindrome(ch,len) << endl;

    // string s = "A man, a plan, a canal: Panama";
    // cout<< "the string is: " << isPalindrome(s);

// FOR REVERSING A WORD IN A STRING

string s = "Milan";
 reverseWord(s);
 cout<< s;

    
    





}