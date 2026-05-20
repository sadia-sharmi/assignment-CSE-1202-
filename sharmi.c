#ifndef SHARMI_H
#define SHARMI_H

#include <stdio.h>

//  Maximum using Array
int max(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Minimum using Array
int min(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

//  Prime Number Check
int isPrime(int n)
{

    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

//  Odd Check
int isOdd(int n)
{
    return n % 2 != 0;
}

// Even Check
int isEven(int n)
{
    return n % 2 == 0;
}

// Sum of Digits
int digitSum(int n)
{

    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

//  Reverse Number
int reverseNumber(int n)
{

    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

//  Decimal to Binary
void decimalToBinary(int n)
{

    int binary[32];
    int i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

//  Binary to Decimal
int binaryToDecimal(int n)
{

    int decimal = 0;
    int base = 1;

    while (n > 0)
    {

        int lastDigit = n % 10;

        decimal += lastDigit * base;

        base *= 2;

        n /= 10;
    }

    return decimal;
}

// Decimal to Octal
void decimalToOctal(int n)
{

    int octal[32];
    int i = 0;

    while (n > 0)
    {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
}

//  Decimal to Hexadecimal
void decimalToHexadecimal(int n)
{

    char hex[32];
    int i = 0;

    while (n > 0)
    {

        int rem = n % 16;

        if (rem < 10)
            hex[i] = rem + 48;
        else
            hex[i] = rem + 55;

        n /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
}

//  Factorial
int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

//  GCD
int gcd(int a, int b)
{

    while (b != 0)
    {

        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// LCM
int lcm(int a, int b)
{

    return (a * b) / gcd(a, b);
}

//  Power Function
int power(int base, int exp)
{

    int result = 1;

    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }

    return result;
}

//  Palindrome Check
int palindrome(int n)
{

    if (n == reverseNumber(n))
        return 1;
    else
        return 0;
}

// Bubble Sort
void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#endif