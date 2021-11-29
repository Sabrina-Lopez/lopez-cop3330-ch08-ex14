/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>
using namespace std;

void addDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value1: " << value1 << "\n";

    double sum = value1 + value2;

    cout << "The sum is " << sum << ".\n";
}

void addConstDouble(double const value1, double const value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value1: " << value1 << "\n";*/

    double sum = value1 + value2;

    cout << "The sum is " << sum << ".\n";
}

void subDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value1: " << value1 << "\n";

    double difference = value1 - value2;

    cout << "The difference is " << difference << ".\n";
}

void subConstDouble(double const value1, double const value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value1: " << value1 << "\n";*/

    double difference = value1 - value2;

    cout << "The difference is " << difference << ".\n";
}

void multiplyDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value1: " << value1 << "\n";

    double product = value1 * value2;

    cout << "The product is " << product << ".\n";
}

void multiplyConstDouble(double const value1, double const value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value1: " << value1 << "\n";*/

    double product = value1 * value2;

    cout << "The product is " << product << ".\n";
}

void divideDouble(double value1, double value2) {
    value1 = value1 + value2; //you can modify the values when they aren't declared as const
    cout << "\nThe new value1: " << value1 << "\n";

    double quotient = value1 / value2;

    cout << "The quotient is " << quotient << ".\n";
}

void divideConstDouble(double const value1, double const value2) {
    /*value1 = value1 + value2; //you can't modify the values when they are declared as const
    cout << "\nThe new value1: " << value1 << "\n";*/

    double quotient = value1 / value2;

    cout << "The quotient is " << quotient << ".\n";
}

double main() {
    double value1;
    double value2;

    cout << "Input two values.\n";
    cin >> value1;
    cin >> value2;

    addDouble(value1, value2);
    //addConstDouble(value1, value2);

    subDouble(value1, value2);
    //subConstDouble(value1, value2);

    multiplyDouble(value1, value2);
    //multiplyConstDouble(value1, value2);

    divideDouble(value1, value2);
    //divideConstDouble(value1, value2);

    return 0;
}