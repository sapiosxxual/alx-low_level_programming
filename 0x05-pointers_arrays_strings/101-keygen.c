#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-generates random valid passwordi
 * Return: (0);
 */
int main(void)
{
	srand(time(NULL));

	char valid_chars[ ] = "abcdefghijklmopqrstuvwxyzABCEFINOPQRSVWXYZ0123456789";
	int password_length = 11;
	char password[12];

	for (int i = 0; i < password_length; i++)
	{
		int random_index = rand() % (sizeof(valid_chars) -1);

		password[i] = valid_chars[random_index];
	}

	password[password_length] = '\0';
	printf("Generated Password: %s\n", password);

	return (0);
}
