#include "palindrome.h"

/**
 * is_palindrome - checks whether a given unsigned integer is a palindrome
 * @n: the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    unsigned long temp = n;
    char digits[21]; /* Max digits for 64-bit unsigned long is 20 */
    int len = 0;
    int i;

    /* Extract digits into array */
    do {
        digits[len++] = temp % 10;
        temp /= 10;
    } while (temp != 0);

}

/**
 * is_palindrome - checks whether a given unsigned integer is a palindrome
 * @n: the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    unsigned long temp = n;
    char digits[21];
    int len = 0;
    int i;

    do {
        digits[len++] = temp % 10;
        temp /= 10;
    } while (temp != 0);

    for (i = 0; i < len / 2; i++)
    {
        if (digits[i] != digits[len - 1 - i])
            return (0);
    }

    return (1);
}
