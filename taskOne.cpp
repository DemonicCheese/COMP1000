#include <iostream>
#include <string>
using namespace std;

int main(){

	//initial variable data 
    int personsAge = 20;
    float personsHeight = 1.65;
    char personsGrade = 'B';
    string personsName = "Alice";
    
	//output of the variables
    cout << "Name: "<< personsName << "\n"; 
    cout << "Age: "<<  personsAge<< "\n";
    cout << "Height: " <<personsHeight<< "\n";
    cout << "Grade: "<<personsGrade<< "\n";
    cout << "\n";
    	
	//updating variable data 
    personsAge = 22;
    personsHeight = 1.75;
    personsGrade = 'A';
    personsName = "Bob";

	//outputting updated variables     
    cout << "Name: "<< personsName << "\n"; 
    cout << "Age: "<<  personsAge<< "\n";
    cout << "Height: " <<personsHeight<< "\n";
    cout << "Grade: "<<personsGrade<< "\n";
    cout << "\n";
    
}