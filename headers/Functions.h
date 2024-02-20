// pre-processor directives 
#include <iostream>
#include <string>


// use C++ standard library namespace 
using namespace std; 



void congratulate2(string student, string language, string programmer){
    // declare and initialize local variable by
    // callin strlen
    int days = programmer.length();

    // display 
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student.c_str(), language.c_str(), programmer.c_str(), days);
}

// function declarations 
void congratulate1(string student, string language, string programmer){
    // display 
    cout << student << " has done as much " << language << " programming as " << programmer << endl;
    congratulate2(student,language,programmer);
}
