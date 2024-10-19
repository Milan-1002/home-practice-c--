#include <iostream>
using namespace std;

int main()
{
  /*  int a, b;
    a = cin.get(); // cin.get gives character (char)
    cout << "the value of a is: " << a << endl;

*/

/*int a, b;
cout << " Enter the value of a" << endl;
cin >> a;
cout << " Enter the value of b" << endl;
cin >> b;

if (a>b)
{
    cout << "A is greater" << endl;
}
if (b>a)
{
    cout << "B is greater" << endl;
}*/


//Q. PROGRAM TO CHECK WHETHER THE ENTERED CHARACTER IS CAPITAL, SMALLER OR NUMERIC
/*char ch;
cout << "Enter the character" << endl;
cin >> ch;
int num = ch;
if(num >= 65 && num <=90)
{
    cout <<"It is bigger alphabet" << endl;
}
else if (num >= 97 && num <=122)
{
    cout << "it is smaller alphabet" << endl;
}
else
{
    cout << "it is a numeric number" << endl;
}
*/

//Q. TO PRINT THE SUM OF N NUMBERS

int num;
cout << "Enter the number" << endl;
cin >> num;
int sum = 0;
int i = 1;
while (i <= num)
{
    sum = sum + i;
    i++;

}
cout << "the sum is:" << sum << endl;

}