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

	for (int i = 0; i < key_length; i++)
	{
		putchar(key[i]);
	}
	putchar('\n');

	return (0);
}

