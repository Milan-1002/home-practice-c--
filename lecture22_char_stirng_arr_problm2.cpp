#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;



char maxOccurance(string s){
    int arr[26] = {0};
    for(int i = 0; i<s.length(); i++){
        char c = s[i];
        int number = 0;
        number = c - 'a';
        arr[number]++;

    }
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi=  arr[i];

        }
    }
    char final_ans = 'a'+ans;
    return final_ans;

}


int main()
{
    string s = "testsample";
   cout <<"length of the string is: "<< s.size() << endl;
   cout<< " max size: " << s.max_size()<< endl;
   cout<< "last character: " << s.back() <<endl;
   cout << "first character: " << s.front() << endl;
   s = s+ " " + "Milan";
   cout<< "string after +: " << s << endl;


    
    



}