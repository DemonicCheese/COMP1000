#include <iostream>
using namespace std; 

int main(){

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
