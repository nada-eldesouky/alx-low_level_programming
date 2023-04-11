#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
if(argc != 3)
{
printf("Error\n");
return (1);
}
return (0);
}
