#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates the key "Tada! Congrats"
 * Return: 0
 */
int main(void)
{
	char key[] = "Tada! Congrats";
	int key_length = sizeof(key) - 1;

	srand(time(NULL));

	int i = 0;

	while (i < key_length)
	{
		putchar(key[i]);
		i++;
	}
	putchar('\n');

	return (0);
}

