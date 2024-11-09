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

double getSum(double a, double b, double c)
{
     /* This function will return the sum of three inputs.
     Each input must be a double. "result" is declared within this
     function and will be assigned to the sum of the three inputs.
     Once calculated, the result will be returned. */

     double result;        // Will be assigned to the sum of the numbers
     result = (a + b + c); // Finds the sum and assigned it to result
     return result;        // Returns the result of the equation
}

int main()
{
     double functionInput;                // Part 1 variable
     int interger1, interger2;            // Part 2 varaibles
     double summand1, summand2, summand3; // Part 3 variables

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

     // Explains the premises to the user
     cout << "Think of a number.\nThis number will go thorugh a "
          << "series of functions to determine:\n"
          << " - It's square root\n"
          << " - The fourth power of the number\n"
          << " - And the floor of the number\n"
          << "Enter your number here: ";

     cin >> functionInput; // Recive the user's number

     // Finds the sqaure root
     cout << "\nThe square root of " << functionInput
          << " is " << sqrt(functionInput) << "\n";

     // Finds the power of the number raised to the 4th
     cout << functionInput << " raised to the 4th power"
          << " is " << pow(functionInput, 4) << "\n";

     // Finds the floor of the number
     cout << "The floor of " << functionInput
          << " is " << floor(functionInput) << endl;

     /*
     Part 2:
     TYPE IN THE FOLLOWING CODE (add a comment that describes the
     code) AND RUN IT!
     */

     // Explains the premise to the user
     // Uses transition words since everything is happening in one go
     cout << "\nNow think about 2 integers.\n"
          << "The integers will go thorugh a\nfunction to find twice it's "
          << "product.\n"
          << "Enter your intergers here: ";
     cin >> interger1 >> interger2;

     // Prints out the result of the function doubleMultiply()
     cout << "\nTwice the product of " << interger1 << " and " << interger2
          << " is: " << doubleMultiply(interger1, interger2)
          << endl;

     /*
     Part 3:
     Write a full program that adds three floating point numbers. Your
     solution should have a function named getSum that accepts three
     double parameters and returns the sum of those three doubles.

     Your main function should call the getSum function and assigns the
     return value to a double variable named result that is declared inside
     the main function.

     Your program should then print out the value stored in result. Submit the
     code and a copy of your output.
     */

     // Explains the premise to the user
     // Indicates that they have reached the end
     cout << "\nFinally, think about any 3 numbers.\n"
          << "The sum of the three will be calculated with a function.\n"
          << "Enter them here: ";
     cin >> summand1 >> summand2 >> summand3;

     // Prints out the result of the function getSum()
     cout << "\nThe sum of " << summand1 << ", " << summand2 << ", and "
          << summand3 << " is " << getSum(summand1, summand2, summand3);

     return 0;
}