/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>
using namespace std;

//function to add the values together with the first value being altered
void addDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value #1: " << value1 << "\n"; //tell the user the new altered value

    double sum = value1 + value2; //find the sum

    cout << "The sum is " << sum << ".\n"; //tell the user the sum
}

//function to add the values together while they are declared as const with the first value being altered
void addConstDouble(const double value1, const double value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value #1: " << value1 << "\n";*/ //tell the user the new altered value

    double sum = value1 + value2; //find the sum

    cout << "The sum is " << sum << ".\n"; //tell the user the sum
}

//function to find the difference of the values with the first value being altered
void subDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value #1: " << value1 << "\n"; //tell the user the new altered value

    double difference = value1 - value2; //find the difference

    cout << "The difference is " << difference << ".\n"; //tell the suer the difference
}

//function to find the difference of the values while they are declared as const with the first value being altered
void subConstDouble(const double value1, const double value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value #1: " << value1 << "\n";*/ //tell the user the new altered value

    double difference = value1 - value2; //find the difference

    cout << "The difference is " << difference << ".\n"; //tell the user the difference
}

//function to find the product of the values with the first value being altered
void multiplyDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value #1: " << value1 << "\n"; //tell the user the new altered value

    double product = value1 * value2; //find the product

    cout << "The product is " << product << ".\n"; //tell the user the product
}

//function to find the product of the values while they are declared as const with the first value being altered
void multiplyConstDouble(const double value1, const double value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value #1: " << value1 << "\n";*/ //tell the user the new altered value

    double product = value1 * value2; //find the product

    cout << "The product is " << product << ".\n"; //tell the user the product
}

//function to find the quotient of the values with the first value being altered
void divideDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value #1: " << value1 << "\n"; //tell the user the new altered value

    double quotient = value1 / value2; //find the quotient

    cout << "The quotient is " << quotient << ".\n"; //tell the user the quotient
}

//function to find the quotient of the values while they are declared as const with the first value being altered
void divideConstDouble(const double value1, const double value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value #1: " << value1 << "\n";*/ //tell the user the new altered value

    double quotient = value1 / value2; //find the quotient

    cout << "The quotient is " << quotient << ".\n"; //tell the user the quotient
}

int main() {
    double value1; //declare a double to hold the user's first value
    double value2; //declare a double to hold the user's second value

    //tell the user to input two values
    cout << "Input two values.\n";

    cin >> value1; //get the user's first value
    cin >> value2; //get the user's second value

    addDouble(value1, value2); //find the sum of the values with the first value being altered
    //addConstDouble(value1, value2); //find the sum of the values with the first value being altered

    subDouble(value1, value2); //find the difference of the values with the first value being altered
    //subConstDouble(value1, value2); //find the difference of the values with the first value being altered

    multiplyDouble(value1, value2); //find the product of the values with the first value being altered
    //multiplyConstDouble(value1, value2); //find the product of the values with the first value being altered

    divideDouble(value1, value2); //find the quotient of the values with the first value being altered
    //divideConstDouble(value1, value2); //find the quotient of the values with the first value being altered

    return 0;
}