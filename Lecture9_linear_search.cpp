#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
     for(int i = 1; i < size; i++){
        if(arr[i]== key){
            return 1;
        }
     }
     return 0;


}
int main()
{ 
    int arr[10] = {5, 7, 3, -2, 10, 22, 4, 0, 1, 9 };

// whether 1 is present in it or not?
cout << "Enter the element to search for" << endl;
int key;
cin >> key;
bool found = search(arr,10,key);
if(found){
    cout << "Element is present" << endl;
}
else{
    cout << "Element is not present" << endl;
}



}