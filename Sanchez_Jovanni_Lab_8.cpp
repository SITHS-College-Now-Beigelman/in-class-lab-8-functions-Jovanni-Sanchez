// Jovanni Sanchez
// November 4 2024
// Lab 8

#include <cmath>
#include <iostream>
using namespace std;

int doubleMultiply(int a, int b)
{
    /* This function will return double the
    product of the two input integers */

    int product; // The product of a and b
    product = (a * b) * 2; // Find the product, then double it
    return product; // return the new value of the product
}

int main()
{
    int number1, number2;
    double subjectOfTheFunctions;

    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    cout << "Twice the product of " << number1 << " and "
    << number2 << " is: " << doubleMultiply(number1, number2)
    << endl;

    cout << "Enter a new number: ";
    cin >> subjectOfTheFunctions;

    cout << "The square root of " << subjectOfTheFunctions 
    << " is " << sqrt(subjectOfTheFunctions) << "\n";

    cout << subjectOfTheFunctions << " raised to the 4th power"
    << " is " << sqrt(subjectOfTheFunctions) << "\n";

    return 0;
}