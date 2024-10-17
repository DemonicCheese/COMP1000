#include <iostream>
using namespace std;

int main(){

    for (int i=0; i<=5; i++){  //setting for loop conditions
        for (int x = 1; x<=i; x++){  // nesting a for loop within the other loop to increase the number of characters outputted relative to the other loops conditions
            cout << "*"; 

        }
        cout << endl;
    }

    for (int n = 1; n <=10; n++){ // setting loop criteria to output numbers 1 at a time from 1 to 10
        for (int o = 1; o<=10 && n<=10 ; o++){ // setting the nested loop to do the same in order to multiply the two numbers 
            cout << n*o << "\t"; // multiplying the two numbers by eachother and outputting them with a tab space
        }
        cout << endl;
    }

    int doWhileNum = 0;
    do {
        cout << "please type a number\n"; // creates a loop that runs until the number given is positive
        cin >> doWhileNum;
    } while(doWhileNum >= 0);

    for (int i = 0; i<=10; i++){
        cout <<"i"<< ":" << i << endl; // creates a loop that counts to 10 
    }
    int userNum = 0;
    while (userNum >=0 ){
        cout << "Please type a number.\n"; // creates a loop that runs until the user gives a positive number
        cin >> userNum;
    }
}
