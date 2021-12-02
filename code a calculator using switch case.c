// Code a calculator using switch case

#include<stdio.h>
int main()
{
    char operation;
    int FirstNumber, SecondNumber;

    printf("Enter Operator: ");
    scanf("%c", &operation);

    printf("Enter First Number: ");
    scanf("%d", &FirstNumber);

    printf("Enter Second Number: ");
    scanf("%d", &SecondNumber);

    switch(operation)
    {
        case '+':
        printf("Sum of two numbers: %d", FirstNumber+SecondNumber);
        break;

        case '-':
        printf("Subtraction of two numbers: %d", FirstNumber-SecondNumber);
        break;

        case '*':
        printf("Multliplication of two numbers: %d", FirstNumber*SecondNumber);
        break;

        case '/':
        printf("Division of two numbers: %d", FirstNumber/SecondNumber);
        break;

        default:
        printf("Invalid Operation!!!!");
        break;

    }


    return 0;
}
