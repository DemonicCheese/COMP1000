#include <iostream>
using namespace std; 

int main(){
    for (int i=0; i<=5; i++){  //setting for loop conditions
        for (int x = 1; x<=i; x++){  // nesting a for loop within the other loop to increase the number of characters outputted relative to the other loops conditions
            cout << "*"; 

        }
        cout << endl;
    }
}
