#include <stdio.h>
#include "Sharmi.h"

int main()
{

    int arr[] = {12, 45, 7, 89, 23};
    int size = 5;

    printf("Maximum Number = %d\n", max(arr, size));
    printf("Minimum Number = %d\n", min(arr, size));

    printf("Is Prime (7) = %d\n", isPrime(7));

    printf("Is Odd (5) = %d\n", isOdd(5));
    printf("Is Even (8) = %d\n", isEven(8));

    printf("Digit Sum of 1234 = %d\n", digitSum(1234));

    printf("Reverse of 1234 = %d\n", reverseNumber(1234));

    printf("Decimal to Binary (10) = ");
    decimalToBinary(10);
    printf("\n");

    printf("Binary to Decimal (1010) = %d\n", binaryToDecimal(1010));

    printf("Decimal to Octal (20) = ");
    decimalToOctal(20);
    printf("\n");

    printf("Decimal to Hexadecimal (255) = ");
    decimalToHexadecimal(255);
    printf("\n");

    printf("Factorial of 5 = %d\n", factorial(5));

    printf("GCD of 12 and 18 = %d\n", gcd(12, 18));

    printf("LCM of 12 and 18 = %d\n", lcm(12, 18));

    printf("2 Power 3 = %d\n", power(2, 3));

    printf("Palindrome Check (121) = %d\n", palindrome(121));

    //  Bubble Sort Test
    int sortArr[] = {5, 2, 9, 1, 3};
    int n = 5;

    bubbleSort(sortArr, n);

    printf("Bubble Sorted Array = ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sortArr[i]);
    }

    printf("\n");

    return 0;
}