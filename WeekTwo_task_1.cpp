#include <iostream>
using namespace std; 

int main(){
    int doWhileNum = 0;
    do {
        cout << "please type a number\n"; // creates a loop that runs until the number given is positive
        cin >> doWhileNum;
    } while(doWhileNum >= 0); 
}
