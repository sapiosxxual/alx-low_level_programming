#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_dog - Write a function that prints a struct dog
 * @d: pointer to the struct we are to print
 * Return: the struct printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
