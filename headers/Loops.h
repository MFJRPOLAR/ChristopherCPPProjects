// pre-processor directives
#include <iostream>

// create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)

// use C++ standard library namespace
using namespace std;

// this funtion uses a while loop to display a 
// countdown to stdout 
void loops1(){
    // declare and initialize a counter variable 
    // for our looop 
    int i = START; 

    // set up while loop using a macro expression 
    // as its condition
    while(CONDITION(i)){
        //printf("%d ", i);
        cout << i << " ";
        i--;
    }
    //printf("blast off!\n");
    cout << "blast off!" << endl;
}  