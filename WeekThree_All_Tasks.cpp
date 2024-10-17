#include <iostream>
using namespace std;

int main (){

    int age;
    cout << "How old are you?\t";
    cin >> age;
    if (age < 18){
        cout << "You are not eligible to vote.";
    }
    else {
        cout << "You are eligible to vote.";
    }

    //

    int grade;

    cout << "\nPlease type the marks to get a grade.\t";
    cin >> grade;

    if (grade >= 90){
        cout << "A" << endl;
    }
    else if (grade >= 80  && grade < 90) {
        cout << "B" << endl;
    }
    else if (grade >=70 && grade < 80){
        cout << "C" << endl;
    }
    else if (grade >= 60 && grade < 70){
        cout << "D" << endl;
    }
    else if (grade < 60){
        cout << "F" << endl;
    }

    //

    int firstNum, secondNum, operatorNum;
    cout << "first number:\t";
    cin >> firstNum;
    cout << "second number:\t";
    cin >> secondNum;

    cout << "Choose an operation: \n 1. Addition\t2. Subtraction\t3. Division\t4. Multiplication" << endl;
    cin >> operatorNum;
    switch (operatorNum){
        case 1:
        cout << firstNum + secondNum<< endl;
        break;
        case 3:
        cout << static_cast<float>(firstNum) / static_cast<float>(secondNum)<< endl;
        break;
        case 4: 
        cout << firstNum * secondNum<< endl;
        break;
        default:
        cout << "function not recognised" <<endl;
        break;
    }
    
    //

    int menuChoice; 
    cout << "\nWelcome to menu simulator\n pick an option by typing whichever you would like to do\n1. Start game\t2. Load game\t3. Quit" << endl;
    cin >> menuChoice;
    switch (menuChoice){
        case 1:
        cout << "Consider the menu to be simulated." << endl;
        break;
        case 2:
        cout << "No save data found." << endl;
        break;
        case 3:
        cout << "Thanks for playing!" << endl;
        break;
        default:
        cout << "Invalid option, try again" << endl;
        break;
    }

    //

    int temperature;
    cout << "What's the temperature outside?" << endl;
    cin >> temperature;
    if (temperature > 0){
        if (temperature > 30){
            cout << "It's hot." << endl;
        } 
        else{
            if (temperature < 15){
                cout << "It's cold." << endl;
            }
            else {
                cout << "It's warm." << endl;
            }
        }
    }
    else {
        cout << "It's freezing." << endl;
    }
}
