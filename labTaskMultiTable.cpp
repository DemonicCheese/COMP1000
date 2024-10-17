#include <iostream>
using namespace std; 

int main(){
    for (int n = 1; n <=10; n++){ // setting loop criteria to output numbers 1 at a time from 1 to 10
        for (int o = 1; o<=10 && n<=10 ; o++){ // setting the nested loop to do the same in order to multiply the two numbers 
            cout << n*o << "\t"; // multiplying the two numbers by eachother and outputting them with a tab space
        }
        cout << endl;
    }
}