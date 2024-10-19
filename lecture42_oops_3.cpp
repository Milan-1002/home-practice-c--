#include<iostream>
#include <iomanip> 
#include"lecture42_oops3_definition.h"
using namespace std;




int main()
{
    circleType circle1;
    double radius;
    cout << "Enter the radius of the circle " << endl;
    cin >> radius;
    circle1.setRadius(radius);

    cout << "the area of the circle is: " << circle1.area();




    return 0;
}