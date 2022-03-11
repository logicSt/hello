#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always (0) Success
 */

int main(void)
{
char alphabet;

alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

char ALPHABET;

ALPHABET = 'A';

while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
}

putchar('\n');

return (0);
}
