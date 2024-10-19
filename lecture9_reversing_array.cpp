#include<iostream>
using namespace std;


// THIS IS THE MOST EFFICIENT WAY TO REVERSE THE ARRAY
void reverseArray(int arr[], int size){

    int start = 0;
    int end = size -1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}



// void reverse(int arr[], int size){
//     // for even numbers of elements
//     if(size%2==0){
//     for(int i = 0; i < size/2; i++){
//         swap(arr[i], arr[size-i-1]);
//     }
//     }
//     // for odd number of elements
//     else{
//         for(int i = 0; i <= size/2; i++){
//         swap(arr[i], arr[size-i-1]);
//     }
// }
// }


int main()
{
int size;
cout << "Enter the size of the array" << endl;
cin >> size;
int arr[size];
for(int i = 0; i<size; i++){
    cin >> arr[i];
}
cout << endl;

reverseArray(arr,size);
cout << "The Array after reversing is: " << endl;

for(int i =0; i< size; i++){
    cout << arr[i] << " ";
}






}