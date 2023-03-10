#include "main.h"
#include <stdio.h>

/**
 * main - prints the value of argc
 * @argc: number of arguments
 * @argv: argument vector
 * Return: argc value
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
