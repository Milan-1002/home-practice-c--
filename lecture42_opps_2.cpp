#include<iostream>
using namespace std;



class clockType{

public:
void setTime(int, int , int);
void getTime(int &, int &, int &) const;
void printTime() const;
void incrementSecond();
void incrementMinute();
void incrementHours();
clockType(int, int, int);  // constructor with parameters
clockType();               // default constructor


private:
int hr;
int min;
int sec;


};


int main()
{

    clockType myClock;
    clockType yourClock;
    int hours, minutes,seconds;


    // setting the time of myClock


// default constructor has already been called. so the hr,min,sec already set to 0
  myClock.getTime(hours, minutes, seconds);

    cout << "hr: " << hours << endl;
    cout << "min: " << minutes << endl;
    cout << "sec: " << seconds << endl;

    myClock.setTime(2,35,40);

    // printing myclock
    cout << "myclock time is: ";
    myClock.printTime();
    cout << endl;

    // setting the time of yourclock

    yourClock.setTime(3,45,60);

    // printing yourclock
    cout << "yourClock time is: ";
    yourClock.printTime();
    cout << endl;

    // incrementing my clock by 1 hour
    myClock.incrementHours();

    // value of myclock after incrementing by 1 hour
    cout << "value of myclock after incrementing by 1 hour" << endl;

    cout << "myclock time is: ";
    myClock.printTime();
    cout << endl;


    // if i want to print the value of private member variables
    //  myClock.hr;  I cannot do this because hr is private
    // so to access the private member I need to use the getfunction();

    myClock.getTime(hours, minutes, seconds);

    cout << "hr: " << hours << endl;
    cout << "min: " << minutes << endl;
    cout << "sec: " << seconds << endl;


    // creating a array of 5 employee and setting ther arrival time and departure time

    clockType empArrivalTime[5];
    for(int i = 0; i < 5; i++){
        cout << "please enter the time in hr min sec this is arrival time " << endl;
        int h;
        int m;
        int s;
        cin >> h >> m >> s;
        empArrivalTime[i].setTime(h,m,s);
    }

    // for departure time
    clockType empDepartureTime[5];
 for(int i = 0; i < 5; i++){
        cout << "please enter the time in hr min sec this is departure time" << endl;
        int h;
        int m;
        int s;
        cin >> h >> m >> s;
        empDepartureTime[i].setTime(h,m,s);
    }


    for(int j = 0; j < 5; j++){
        cout << "Employee " << (j+1) << " arrival time is: ";
        empArrivalTime[j].printTime();
        cout << endl;
    }

    
    

    return 0;
}

void clockType::setTime(int hours, int minutes, int seconds){
    if(hours >= 0 && hours < 24){
        hr = hours;
    }
    else{
        hr = 0;
    }
    if(minutes >= 0 && minutes < 60){
        min = minutes;
    }
    else{
        min = 0;
    }
    if(seconds >= 0 && seconds < 60){
        sec = seconds;
    }
    else{
        sec = 0;
    }
}

void clockType:: getTime(int & hours, int &minutes, int &seconds)const{
    hours = hr;
    minutes = min;
    seconds = sec;
}


void clockType::printTime() const{
    if(hr < 10)
        cout << "0";
    cout << hr << ":";

    if(min < 10)
        cout << "0";
    cout << min << ":";

    if(sec < 10)
        cout << "0";
    cout << sec;

    
}  

void clockType::incrementHours(){
    hr++;
    if(hr > 23){
        hr = 0;
    }
}

void clockType::incrementMinute(){
    min++;
    if(min > 59){
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSecond(){
    sec++;
    if(sec > 59){
        sec = 0;
        incrementMinute();
    }
}

// definitions fucntions for constructors

clockType::clockType(int hours, int minutes, int seconds){
    setTime(hours, minutes, seconds);
    
}

clockType::clockType(){
    hr = 0;
    min = 0;
    sec = 0;    
    cout << "I am invoked" << endl;
}



    
