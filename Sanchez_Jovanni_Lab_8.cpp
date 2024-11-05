// Jovanni Sanchez
// November 4 2024
// Lab 8

#include <cmath>
#include <iostream>
using namespace std;

int doubleMultiply(int a, int b)
{
    /* This function will return double the product of the two
    input integers. It takes two numbers, represented by the
    variables "a" and "b", then multplies them to find the product.
    Once the product is found, it is doubled and finally returned. */

    int product;           // Will be assigned to the product
    product = (a * b) * 2; // Finds the product, then double it
    return product;        // Returns the new value of the product
}

int main()
{
    int number1, number2;
    double subjectOfTheFunctions;

    /*
    Part 1:
    Practice using built-in functions. (For this you do not
    need to write function definitions, just #include the header
    files needed!)

    Write a C++ program that prompts the user to enter a floating
    point number (double).

    Your code then prints out (call the appropriate functions!)
    a. The square root of the number
    b. The number raised to the 4th power
    c. The floor of the number
    */

    cout << "Enter any number: ";
    cin >> subjectOfTheFunctions;

    cout << "The square root of " << subjectOfTheFunctions
         << " is " << sqrt(subjectOfTheFunctions) << "\n";

    cout << subjectOfTheFunctions << " raised to the 4th power"
         << " is " << pow(subjectOfTheFunctions, 4) << "\n";

    cout << "The floor of " << subjectOfTheFunctions
         << " is " << floor(subjectOfTheFunctions) << endl;

    /*
    Part 2:
    TYPE IN THE FOLLOWING CODE (add a comment that describes the
    code) AND RUN IT!
    */

    cout << "Now enter two integers: ";
    cin >> number1 >> number2;

    cout << "Twice the product of " << number1 << " and "
         << number2 << " is: " << doubleMultiply(number1, number2)
         << endl;

    return 0;
}