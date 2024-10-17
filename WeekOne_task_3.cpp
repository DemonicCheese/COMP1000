#include <iostream>
#include <cstring>
using namespace std;

static int staticVariable = 0; // defining static variable

extern int globalVariable = 0; // defining global variable 

int main(){
    int localVariable = 0; // defining local variable 

    cout << staticVariable << endl;
    cout << globalVariable << endl; // calling variables 
    cout << localVariable << endl;

    localVariable++;
    globalVariable++;  // incrementing variables
    staticVariable++;

    cout << staticVariable << endl;
    cout << globalVariable << endl; // calling variables
    cout << localVariable << endl;
}
