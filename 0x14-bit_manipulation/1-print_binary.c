#include <stdio.h>
#include "main.h"
/*
 * print_binary - print a number as a binary str
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n);

{
int mask = 1 << 31;
int n;
printf("Binary representation: ");

for (n = 0; n < 32; n++)
{
if (num & mask)
{
printf("1");
}
else
{
printf("0");
}
mask >>= 1;
}
}
