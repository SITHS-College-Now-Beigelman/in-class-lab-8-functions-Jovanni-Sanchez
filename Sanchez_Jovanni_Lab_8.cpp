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
    int number1, number2;          // Part 2 varaibles
    double subjectOf3Functions;    // Part 1 variable
    double alvin, simon, theodore; // Part 3 variables
    // TODO: Come up with good names for these variables

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
    cin >> subjectOf3Functions;

    cout << "The square root of " << subjectOf3Functions
         << " is " << sqrt(subjectOf3Functions) << "\n";

    cout << subjectOf3Functions << " raised to the 4th power"
         << " is " << pow(subjectOf3Functions, 4) << "\n";

    cout << "The floor of " << subjectOf3Functions
         << " is " << floor(subjectOf3Functions) << endl;

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

    cout << "Finally, type any three numbers: ";
    cin >> alvin >> simon >> theodore;

    cout << "The sum of " << alvin << ", " << simon
         << ", and " << theodore << " is "
         << getSum(alvin, simon, theodore);

    return 0;
}