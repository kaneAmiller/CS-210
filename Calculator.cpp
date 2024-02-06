/*
 * Calculator.cpp
 *
 *  Date: January 22th, 2024
 *  Author: Kane Miller
 */

#include <iostream>

using namespace std;

int main()  // Corrected return type
{
    char statement[100];
    double op1, op2;  // Changed to double to handle floating-point numbers
    char operation;
    char answer = 'Y';  // Corrected to use single quotes for char initialization

    while (answer == 'y' || answer == 'Y')  // Checking for both 'y' and 'Y'
    {
        cout << "Enter expression" << endl;
        cin >> op1 >> operation >> op2;  // Corrected the order to match usual notation

        if (operation == '+')  // Removed semicolon
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        else if (operation == '-')  // Removed semicolon, changed to 'else if' to avoid multiple checks
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        else if (operation == '*')  // Changed to 'else if' and fixed missing semicolon
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;  // Added missing semicolon
        else if (operation == '/')  // Changed to 'else if'
        {
            if (op2 == 0)  // Checking for division by zero
                cout << "Cannot divide by zero" << endl;
            else
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        }

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
    return 0;  // Return statement for main
}
