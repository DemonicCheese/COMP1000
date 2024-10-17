#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<=10; i++){
        cout <<"i"<< ":" << i << endl; // creates a loop that counts to 10 
    }
    int userNum = 0;
    while (userNum >=0 ){
        cout << "Please type a number.\n"; // creates a loop that runs until the user gives a positive number
        cin >> userNum;
    }
}
