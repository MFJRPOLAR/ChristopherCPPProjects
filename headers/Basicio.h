// pre-proccesor 
#include <iostream>
#include <string>

// define constants 
#define FIRST_NAME "Christopher"
#define LAST_NAME "Velasco"
#define AGE 19 
#define WEIGHT 220.30

// use C++ standard library namespace 
using namespace std; 

// this function uses cout and the insertion operator 
// to write data stdout
void output(void){
    // cout is an object of the output stream of a C++
    // application that is used to output information 
    // to either the terminal or a file 
    // << is the insertion operator and it's used in conjunction
    // with cout to show what is being output and to concatenate
    // what is being output.
    // a newline character isn't appened to the end of the 
    // output, so we must us the endl command
    cout << "Your First Name is " << FIRST_NAME << endl;
    cout << "Your Last Name is " << LAST_NAME << endl;
    cout << "Your Age is " << AGE << endl;
    cout << "Your Weight is " << WEIGHT << endl;    
    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
}

// this function uses cin and the extraction operator
// input data from stdin
void input(void){
    // declare vairables to store input
    int age;
    float weight;
    // C++ has a string type
    string name;

    // propmt user for an int
    cout << "Enter your age: ";
    // cin is an object of the input stream of a C++ application 
    // >> is the extraction operator and it's used to read input
    // from the input stream and place it in a varibale
    cin >> age;
    cout << "Entered age is: " << age << endl;

    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Entered weight is: " << weight << endl;
    
    //prompt user for an int and a float
    cout << "Enter your age and your weight seperated by a space: ";
    cin >> age >> weight;
    cout << "Entered age is " << age << " and entered weight is " << weight << endl;

    cout << "Enter your fullname: ";
    // cin stops reading a string when it encounters an empty space
    // cin >> name;
    // get line reads a full like from the input stream, including any spaces present
    // in the full line, but it also reads in any newline characters present in the 
    // full line and this can sometimes prevent it from reading the input string. 
    // must call ignore before calling getline to ignore any newline characters 
    // present in the full line
    cin.ignore();
    getline(cin, name);
    cout << "Entered fullname is: " << name << endl;

}