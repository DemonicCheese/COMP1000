#include <iostream>
#include <string>
using namespace std;

int main(){
    
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
}