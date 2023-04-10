#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int sum;
if (argc == 3)
{
sum = atoi(argv[1] * atoi(argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0)
}
