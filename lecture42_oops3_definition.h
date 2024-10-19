class circleType{

    public:
    void setRadius(double r);
        // function to set radius
        // postcondition: if(r > 0) radius = r;
                    //    otherwise radius = 0;
    

    double getRadius();
    // Function to return the radius
    // Postcondition: the value of radius is returned.

    double area();
    // Function to return the area of circle
    // postcondition: Area is calculated and returned.

    double circumference();
    // Function to return the circumference of the circle
    // postcondition: circumference is calculated and returned

    circleType(double r = 0);
    //Constructor with a default parameter.
    //Radius is set according to the parameter.
    //The default value of the radius is 0.0;
    //Postcondition: radius = r;

    private:
    double radius;
    

};

// the definition of the above functions are as follows

void circleType::setRadius(double r){
    if(r>=0){
        radius = r;
    }
    else{
        radius = 0;
    }
}

double circleType::getRadius(){
    return radius;
}

double circleType::area(){
    return 3.1416 * radius * radius;
}

double circleType::circumference(){
    return 2 * 3.1416 * radius;
}

circleType::circleType(double r){
    setRadius(r);

}