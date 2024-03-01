// pre-proccessor directives 
#include <iostream>
#include <new>

// include header files
#include "./headers/Basicio.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
#include "./headers/Cylinder.h"

// in C++ a namespace is a collection of related functions,
// classes, objects, and variables.

// the C++ standard library functions, classes, objects, and
// variables are in a namespace name std.

// a way to bring in a specific object, function, class, or 
// variable of the std namespace into an application is with the
// help of the using declaration.
// using std::cout;

// another way to bring in a specific object, function, class, or 
// variable of the std namespace into an application is with the
// help of the using namespace statement. 
using namespace std;

int main(){

    // int i, n;
    // int * p;
    // cout << "How many numbers would you like to type?";
    // cin >> i;
    // // this line of code is dynamically allocating memory
    // p = new (nothrow) int[i];
    // if (p == nullptr){
    //     cout << "Error : memory could not be allocated";
    // }else {
    //     for (n = 0; n <i; n++){
    //         cout << "Enter number: ";
    //         cin >> p[n];
    //     }
    //     cout << "You have entered: ";
    //     for (n = 0; n < i; n++){
    //         cout << p[n] << ", ";    
    //     } 
    //     // this line of code is deallocating the memory 
    //     delete[] p;
    // }
    // in order to use a C++ object, like cout, we need to 
    // specify that belongs to the std namespace.
    // one way to specify is by using the scope resolution 
    // operator :: in conjuction with a reference to the 
    // name of the namespace
    // std::cout << "Hello World!";
    //cout << "Hello World!";

    /*Basic Output*/
    //output();
    //input();

    /*Decisions*/
    //decisions1();

    /*Loops*/
    //loops1();

    /* Functions */
    // string student = "Christopher Velasco";
    // string language = "C++";
    // string programmer = "Bjarne Stroustoup";

    // congratulate1(student, language, programmer);

    /* Structs */
    // accessStructMembers();
    
    // // declare a Person struct 
    // PersonType p; 

    // // initialize the Person struct's fields 
    // p.heightInMeters = 1.8;
    // p.weightInKilos = 96;

    // // display computed BMI
    // cout << "Computed BMI is " << bodyMassIndex(p) << endl;

    /* OOP */
    // decalre and initialize a Circle object using no-arg constructos 
    Circle circle1;

    // declare local variables that will be used when calling circle1's getters 
    int r;
    double a; 

    // output contents of circle 1 to stdout 
    cout << "Circle1: ";
    circle1.printCircle();

    // call circle1's setter to change radius 
    circle1.setRadius(5);

    // output contents of circle 1 to stdout 
    cout << "Circle1: ";
    circle1.printCircle();

    circle1.compute();
    // output contents of circle 1 to stdout 
    cout << "Circle1: ";
    circle1.printCircle();

    // call circle1's getter methods
    // when calling getter methods, must provide local variables as arguement 
    // the value in the radius field will be placed by the getter method into the 
    // address of the local variable
    circle1.getRadius(r);
    cout << "Radius 1: " << r << endl;

    circle1.getArea(a);
    cout << "Area 1: " << a << endl; 

    // declare and initialize Circle object using one-arg constructor 
    Circle circle2(3);

    // output contents of circle 2 to stdout 
    cout << "Circle 2: ";
    circle2.printCircle();

    // compute area of circle 2 
    circle2.compute();

    // output contents of circle 2 to stdout 
    cout << "Circle 2: ";
    circle2.printCircle();

    // output if circle1 is equal to circle2
    // use this to allow it to return true or false instead of 0 or 1 
    cout << std::boolalpha;
    cout << "Circle 1 equal Circle2? "<< circle1.equalCircle(circle2) << endl;
    cout << "Circle 1 equal Circle2? "<< (circle1.equalCircle(circle2) == 0 ? "false" : "true") << endl;

    // declare and initialze a Cylinder object using the no-arg constructor
    Cylinder cylinder1;

    // declare local vairable that will be used when calling the cylinder's
    int h;
    double v; 

    //  output the contents of cylinder1 to stdout
    cout << "Cylinder 1: ";
    cylinder1.printCylinder();

    // set cylinder's radius and compute its area
    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();

    //  output the contents of cylinder1 to stdout
    cout << "Cylinder 1: ";
    cylinder1.printCylinder();

    // set cylinder1's height and compute its volume 
    cylinder1.setHeight(7);
    cylinder1.compute();

    //  output the contents of cylinder1 to stdout
    cout << "Cylinder 1: ";
    cylinder1.printCylinder();

    // call cylinder1's getter methods 
    cylinder1.getHeight(h);
    cout << "Height 1: " << h << endl;
    cylinder1.getVolume(v);
    cout << "Volume 1: " << v << endl;

    // declate and initialize another Cylinder using the two-arg constructor 
    Cylinder cylinder2(4,2);

    //  output the contents of cylinder1 to stdout
    cout << "Cylinder 2: ";
    cylinder2.printCylinder();

    // compure cylinders' area ad volume
    cylinder2.Circle::compute();
    cylinder2.compute();

    //  output the contents of cylinder1 to stdout
    cout << "Cylinder 2: ";
    cylinder2.printCylinder();

    // use this to allow it to return true or false instead of 0 or 1 
    cout << std::boolalpha;
    cout << "Cylinder 1 equal Cylinder 2? "<< cylinder1.equalCylinder(cylinder2) << endl;
    cout << "Cylinder 1 equal Cylinder 2? "<< (cylinder1.equalCylinder(cylinder2) == 0 ? "false" : "true") << endl;

    return 0;
}