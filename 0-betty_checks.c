#include <stdio.h>

/**
 * print_string - Prints a string to the standard output
 * @s: The string to be printed
 *
 * Return: None
 */

void print_string(char *s)
{
	if (s == NULL)
	{
		printf("Error: Null pointer\n");
		return;
	}
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}

/*
 * main - function that prints string
 * @char: charcter to print
 * Return: 0
 */

int main(void)
{
	char myString[] = "Hello, World!";

	print_string(myString);
	return (0);
}
