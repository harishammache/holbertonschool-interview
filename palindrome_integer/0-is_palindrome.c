#include "palindrome.h"

/**
 * is_palindrome - checks if an unsigned long integer is a palindrome
 * @n: number to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    unsigned long reversed = 0, tmp = n;

    while (tmp != 0)
    {
        reversed = reversed * 10 + (tmp % 10);
        tmp /= 10;
    }

    return (reversed == n ? 1 : 0);
}
