#include<iostream>
using namespace std;

// creating class
class Hero{

    // properties
 public:    
 int health;

 char level;


// this is the construction, when we create a object of Hero in the main. this constructor is called automatically
  Hero(){
    cout << "constructor called" << endl;
 }

 // parameterised constructor

 Hero(int health){

    // this is a keyword which stores the address of current object. in this case, this->health is representing health above
    // whereas health beyond = is representing input health
    this->health = health;

 }

 Hero(int health, char level){
    this->health = health;
    this->level = level;
 }


 void print(){
    cout <<"health is: "  << this->health << endl;
    cout << "level is: " << this->level << endl;
 }
   
    char getLevel(){
        return level;
    }

    void setLevel(char c){
        level = c;
    }

    // Destructor 
    ~Hero(){
      cout << "destrructor called" << endl;
    }

};


int main()
{
//     // creating of object
//     Hero ramesh;

//     // we can set the valu by using dot operator

//    // ramesh.health = 40;


//    // ramesh.level = 'A';
//    //ramesh.setLevel('B');


//    // cout << "health is: " << ramesh.health << endl;
    




// //static allocation of memory
// Hero a;

// cout << "level is: " << a.level << endl;
// cout << "health is: " << a.health << endl;




// // dynamically allocation of memory

// Hero *b = new Hero;

// cout << "level is: " << (*b).level << endl;


// this is the object. this line will create a constructor. 
// Hero ramesh;

//   Hero ramesh(20);
//   cout << "health is: " << ramesh.health << endl;

// *********COPY CONSTRUCTOR

// Hero s(20,'B');
// s.print();


 
// Hero R(s);  // making a object R and copying the values of s in R.
// R.print();


// **********Destructor***********

// static 
Hero a;     // when we create an object constructor and destructor are automatically created for static


// dynamic

Hero *b = new Hero();

delete b;   // in dynamic allocation we have to called the destructor manually




    return 0;
}