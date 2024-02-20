// pre-processor directives
#include <iostream>
#include <iomanip>

// crete macro values (constants)
#define NUM 34568.8

// use C++ standard library namespace
using namespace std;


// this function uses the comparision operators 
// and the if, if-else, and if-else-if statements 
void decisions1(){
    // declare variable of the type float that will be used in conditions 
    // initiate it using macro value defined in header file 
    double num = NUM;

    // show decimal ppoint notation and trailing zeors on cout 
    cout << fixed << showpoint;

    // show three digits to the right of the decimal on cout 
    cout << setprecision(3);

    if (num < 40000.0){
        //printf("%.1f is less than 4000.0\n", num); // displayed
        cout << num << " is less than 4000.0" << endl;
    }

    // change value in variable 
    num += num;

    // uses an if-else statement 
    if (num < 40000.0){
        //printf("%.1f is less than 4000.0\n", num); // not displayed
        cout << num << " is less than 4000.0" << endl;
    }else {
        //printf("%.1f is not less than 4000.0\n", num); // displayed
        cout << num << " is not less than 4000.0" << endl;
    }

    // change value in variable 
    num = 0.0;

    // use an if-else-if statement 
    if (num == 0.0){
        //printf("%.f is equal to 0.0\n", num); // displayed
        cout << num << " is equal to 0.0" << endl;
    }else if (num < 0.0){
        //printf("%.f is less than 0.0\n", num); // not displayed
        cout << num << " is less than 0.0" << endl;
    }else{
        //printf("%.f is greater than 0.0\n", num); // not displayed
        cout << num << " is greater than 0.0" << endl;
    }
}