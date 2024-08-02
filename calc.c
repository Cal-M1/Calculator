#include <stdio.h>

// Function for simple calc using switch statement
double simplCalc(double num1, double num2, char op)
{
    double result;

    switch (op){
    case '+': // Addition
        result = num1 + num2;
        break;
    case'-': // Subtraction
        result = num1 - num2;
        break;
    case'*': // Mutiplication
        result = num1 * num2;
        break;
    case'/': // Division
        if (num2 != 0) // Checks if the divisor is 0
        {
            result = num1 / num2;
        }else{
            printf("Error! Divsion by zero.\n");
            return 0;
        }
        break;      
    default:
    printf("Error! Please enter a vaild Operator\n");
    }
    return result;
}

int main()
{
    char op;
    double num1, num2, result;

    // Asks the user to input a Operator
    printf("Enter an operator (+, -, *, /): ");
    // Reads Operator
    scanf(" %c", &op);

    // Asks the user to input Number 1
    printf("Enter Number 1: ");
    // Reads num1
    scanf("%lf", &num1);

    // Asks the user to input Number 1
    printf("Enter Number 2: ");
    // Reads num1
    scanf("%lf", &num2);

    // Performs the calculation
    result = simplCalc(num1, num2, op);

    // Outputs the result
    printf("Result = %.2lf\n", result);

    return 0;
}