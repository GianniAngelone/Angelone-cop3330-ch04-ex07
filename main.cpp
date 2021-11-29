/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gianni Angelone
 */
#include "std_lib_facilities.h"
double getNumbers(string input) {
    double number;
    if (input=="zero" || input == "0"){ //Using these OR statements, we are able to translate the users input, regardless of form.
        number = 0;
    } else if (input == "one" || input == "1") {
        number = 1;
    } else if (input == "two" || input == "2") {
        number = 2;
    } else if (input == "three" || input == "3") {
        number = 3;
    } else if (input == "four" || input == "4") {
        number = 4;
    } else if (input == "five" || input == "5") {
        number = 5;
    } else if (input == "six" || input == "6") {
        number = 6;
    } else if (input == "seven" || input == "7") {
        number = 7;
    } else if (input == "eight" || input == "8") {
        number = 8;
    } else if (input == "nine" || input == "9") {
        number = 9;
    } else {
        number = stod(input);
        cout << number << " is not a single digit number"; //Anything out of the 0-9 range
    }
    return number;
}

int main(void) {
    string digit1, digit2;
    double result, number1, number2;
    char operation;

    cout << "Enter a single digit number: ";
    cin >> digit1;
    cout << "Enter another single digit number: ";
    cin >> digit2;
    cout << "Enter one of the following operation symbols: '+ - * /': ";
    cin >> operation;
    number1 = getNumbers(digit1);
    number2 = getNumbers(digit2);

    if (operation == '+') {
        result = number1+number2;
        cout << "The sum of " << number1 << " and " << number2 << " is " << result << ".\n";
    } else if (operation == '-') {
        result = number1-number2;
        cout << "The difference of " << number1 << " and " << number2 << " is " << result << ".\n";
    } else if (operation == '*') {
        result = number1*number2;
        cout << "The product of " << number1 << " and " << number2 << " is " << result << ".\n";
    } else {
        if (number2 == 0) {
            cout << "Undefined. Cannot be divided by 0."; //Must account for undefined results
            return 0;
        }
        result = number1/number2;
        cout << "The quotient of " << number1 << " and " << number2 << " is " << result << ".\n";
    }
    return 0;
}