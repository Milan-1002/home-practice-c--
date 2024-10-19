#include <iostream>
#include <cmath>
using namespace std;

int main()
{
// Problem 0:
//(This is named problem zero because it is done for you, see eCampus for the code and an example of how to complete the rest of the problems.)
// 1. 	Take as input any number that the user enters (cin >> varname)
cout << "Enter the number" << endl;
int varname;
cin >> varname;
// 2. 	Multiply the number by 2
int varname1 = varname *2;
cout << varname << " * 2 = " << varname1 << endl;
// 3. 	Add 10 to the number
int varname2 = varname1 + 10;
cout << varname1 << " + 10 = " << varname2 << endl; 
// 4. 	Divide the number by 2
int varname3 = varname2/2;
cout << varname2 << " / 2 = " << varname3 << endl;
// 5. 	Subtract 5 from the number
int varname4 = varname3 - 5;
cout << varname3 << " 15 - 5 = " << varname4 << endl;
// 6. 	The result should be the original number (if not then we did something wrong)

// Problem 1:
// 1.	Take any number the user enters 
cout << "Enter the number" << endl;
int num;
cin >> num;
// 2.	Add 3 to the number
cout << num;
num +=3;
cout << " + 3 = " << num << endl;
// 3.	Multiply the number by 2
cout << num;
num *=2;
cout << " * 2 = " << num << endl;
// 4.	Subtract 6 from the number
cout << num;
num -=6;
cout << " - 6 = " << num << endl;
// 5.	Divide by 2
cout << num;
num /=2;
cout << " / 2 = " << num << endl;
// 6.	The result should be the original number

// Problem 2:
// 1.	Enter a random number
cout << "Enter the number" << endl;
int num2;
cin >> num2;
// 2.	Store the input number for later use (as another variable)
int num22 = num2;
// 3.	Multiply the number by 5
cout << num2;
num2 *=5;
cout << " * 5 = " << num2 << endl;
// 4.	Add 45 to the number
cout << num2;
num2 +=45;
cout << " + 45 = " << num2 << endl;
// 5.	Multiply the number by 2
cout << num2;
num2 *=2;
cout << " * 2 = " << num2 << endl;
// 6.	Divide the number by 10
cout << num2;
num2 /= 10;
cout << " / 10 = " << num2 << endl;
// 7.	Subtract the original number from your previous answer
cout << num2;
num2 -=num22;
cout << " -" << num22 << " = "<< num2 << endl;
// 8.	The result should be 9


// Problem 3: 
// 1.	Take any 2 digit number from 10 to 82. (You do not have to check the numbers just assume the user will enter a valid number so long as you tell them to).
// 2.	Store an extra copy of this number for later (as you did in problem 2)
// 3.    Add 116 to the number.
// 4. 	Remove the hundreds place from your number (by modulus operation)
// 5.    Subtract 1 from the number.
// 6.	Subtract this from your original number (stored in step 2).
// 7. 	What is your result?


int num3;
cout <<"Enter any number between 10 to 82" << endl;
cin >> num3;
int num_3 = num3;
num3 += 116;
num3 %= 100;
num3 -= 1;
num3 -= num_3;
cout <<"the result is: " << num3 << endl;

// Problem 6:
// 1.	Take a whole number from the user that is larger than 1
// 2.	Store a copy of the number for later
// 3.	Add 2 to the number
// 4.	Multiply the number by itself (not the stored copy, but the current value)
// 5.	Divide the number by 4
// 6.	Subtract away the stored value from step 2
// 7.	Multiply the number by 4
// 8.	Take the square root of the number (you can use cmath’s sqrt function)
// 9.	The result should be the same for any value specified

int num6;
cout <<"Enter the whole number that is larger than 1" << endl;
cin >> num6;
int num_6 = num6;
num6+=2;
num6 *= num6;
num6 /= 4;
num6 -= num_6;
num6 *= 4;
num6 = sqrt(num6);
cout << "The result is: " << num6 << endl;



// Problem 8:
// 1: Have the person write down any three digits number with decreasing digits (432 or 875).
// 2: Reverse the number you wrote in #1. 
// 3: Subtract the number obtained in #2 from the number you wrote in #1 (#1 - #2)
// 4: Reverse the number obtained in #3
// 5: Add the numbers found in #3 and #4
// What is the answer?

int num8;
cout <<"Enter the three digit number in decreasing order" << endl;
cin >> num8;
int num_8 = num8;
int ones = num8 % 10;
int tens = (num8/10)% 10;
int hundred = num8 / 100;
int reversed_num = hundred * 100 + tens * 10 + ones; 
}

