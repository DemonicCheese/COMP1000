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

    //task two

   //defining variables
   int firstNum = 0;
   int secondNum = 0;

   //taking inputs from user 
   cout << "Please type a number.\n";
   cin >> firstNum; 
   cout << "The number you typed was " << firstNum << "\nPlease type a second number.\n";
   cin >> secondNum;
   cout << "The number you typed was " << secondNum << "\n";
  
   //arithmetic functions
   int numberSum = firstNum + secondNum;
   int numberSubtract = firstNum - secondNum;
   int numberMulti = firstNum * secondNum;
   float numberDiv = static_cast<float>(firstNum) / static_cast<float>(secondNum);
   int numberMod = firstNum % secondNum;

   //outputs to user
   cout << "The two numbers added together make " << numberSum << ".\n";
   cout << "The first number subtract the second number is " << numberSubtract << ".\n";
   cout << "The two numbers multiplied together equals " << numberMulti << ".\n";
   cout << "The first number divided by the second number is " << numberDiv << ".\n";
   cout << "The modulus of the two is " << numberMod << ".\n";   

   //task three
   static int staticVariable = 0; // defining static variable

extern int globalVariable; // defining global variable 

//int main(){
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
//}

    //task four 
    //defining variables   
    int firstNum = 0; 
    int secondNum = 0;
    
    //taking user inputs and assigning them to variables
    cout << "Please type a number.\n";
    cin >> firstNum; 
    cout << "The number you typed was " << firstNum << "\nPlease type a second number.\n";
    cin >> secondNum;
    cout << "The number you typed was " << secondNum << "\n";

    //finding the difference in the types of division and using static cast to change the type of the first and second number 
    int numberDiv = firstNum / secondNum; 
    float numberDivFloat = static_cast<float>(firstNum) / static_cast<float>(secondNum);

    //output for the results of the division 
    cout << "The first number divided by the second number is " << numberDiv << "\n";
    cout << "The first number divided by the second number is " << numberDivFloat << "\n";

    /* integer division doesnt account for the decimal places and only outputs the whole numbers 
    due to the fact that the integer data type doesnt store enough data for fractional integers */

}
