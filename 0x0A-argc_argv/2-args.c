#include <stdio.h>
/**
 * main - function
 * @argc: int
 * @argv: list
 * Return: zero
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
			printf("%s\n", argv[i]);
				i++;
	}

	return (0);
}
