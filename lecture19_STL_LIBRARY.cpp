#include<iostream>
#include<string>
#include <array>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>


using namespace std;
int main()
{
    // FOR STL ARRAY
    // int basic [3] = {1,2,3};

    // array<int,4> a = {1,2,3,4};  // stl array initialize
    // int size = a.size();  // get the length of the array

    // cout << "Element at 2nd Index" << a.at(2) << endl;  // this way we can get the specific element of the array
    // cout << "Empty or Not " << a.empty() << endl;


  // **************FOR VECTOR**************

//   vector<int>v;  // declare the vector v
//   cout << "capacity-->" << v.capacity() << endl;// it shows how much a vector can store

//   v.push_back(1); // this gonna add a 1 to a vector
//   cout << v[0];  // way to access a element in vector

//   v.push_back(2);
//   v.push_back(3);

// // this is also a way to access a element in vector
//   cout << "Element at 2nd index " << v.at(2) << endl;


// ************DEQUE**********

// deque<int>d;
// // this will add elemnt in the back
// d.push_back(1);

// // this will add element in the front
// d.push_front(2);

// for(int i: d){
//     cout << i << endl;
// }

// // d.pop_back();
//    d.pop_front();

// cout << "The array after pop_back/pop_front is: " << endl; 
// for(int i: d){
//     cout << i << endl;
// }

// **************stack**************

// stack<string>s;

// // to add a element in stack we use push()

// s.push("love");
// s.push("Milan");
// s.push("Sunar");

// // last 'in' first 'out' concept
// cout << "Element which we had store in the last: " << s.top() << endl;
// s.pop();

// cout << "Elemnt after pop: " << s.top() << endl;

// ********Queue************

// queue<string> s;

// s.push("Milan");
// s.push("Sunar");
// s.push("love");

// // this gonna access the first elemnt we had store in the queue
// cout<< "the first element is: " << s.front() << endl;

// // unlike in stack this function will remove the element which we had store at first
// s.pop();

// cout<< "the first element is: " << s.front() << endl;


// *********PRIORITY QUEUE*********

// max heap
// priority_queue<int> maxi;

// // min- heap
// priority_queue<int,vector<int>,greater<int>> mini;

// maxi.push(1);
// maxi.push(4);
// maxi.push(8);
// maxi.push(3);

// int size = maxi.size();
// for(int i = 0; i< size; i++){
//     cout << maxi.top() << " ";  // this will get the greatest element at first
//     maxi.pop();   // this gonna remove the greatest element after printing above
// }
// cout << endl;

// mini.push(1);
// mini.push(4);
// mini.push(8);
// mini.push(3);

// int size1 = mini.size();
// for(int i = 0; i <size1; i++){
//     cout << mini.top() << " ";
//     mini.pop();
// }


// *************** SET*************

// set<int>s;

// s.insert(2);
// s.insert(3);
// s.insert(0);
// s.insert(7);

// for(auto i: s){
//     cout << i << endl;
// }

// cout << endl;

// // count() function will check whether the element is present in the set or not
// cout << "7 is present or not " << s.count(7) << endl; 


//***********MAP****************

// map<int,string> m;

// m[1] = "Milan";
// m[2] = "sunar";
// m[7] = "love";

// // this way also we can include key(5) and value(bheem) in the map
// m.insert({5,"bheem"});

// for(auto i: m){
//     cout << i.first << " "<< i.second << endl;
// } cout << endl;

// cout<< "included or not " << m.count(5) << endl;


//************** BINARY SEARCH*********

vector<int>v;

v.push_back(1);
v.push_back(3);
v.push_back(4);
v.push_back(8);
cout<< "Finding 6--> " << binary_search(v.begin(),v.end(),3) << endl;

cout << "lower bound " << lower_bound(v.begin(),v.end(),3)-v.begin() <<endl;
cout << "upper bound " << upper_bound(v.begin(),v.end(),3)-v.begin() <<endl;

// for gettin maximum number and the minimum number
int a = 3;
int b = 5;
cout << "max: " << max(a,b) << endl;

cout << "min: " << min(a,b)<< endl;


// for swaping any two numbers
swap(a,b);
cout << "a: " << a << endl;
cout << "b: " << b << endl;


//for reversing a string
string str = "abcd";
string num = "1234";
reverse(str.begin(),str.end());
cout << "string: " << str << endl;

reverse(num.begin(),num.end());
cout << "string NUm: " << num <<endl;

// for rotating the array
rotate(v.begin(),v.begin()+1,v.end());
cout << "after rotation" <<endl;

for(int i: v){
  cout << i << " ";
}
cout << endl;

// for sorting the array
  sort(v.begin(),v.end());

  for(int i: v){
  cout << i << " ";
  }cout << endl;

int arr[5] = {5,3,6,2,0};

sort(arr, arr+5);
cout << "the array after sorting is: " << endl;

for(int i = 0; i< 5; i++){
  cout << arr[i] << " ";
}
cout << endl;


}

