#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*
 *
 * print_dog - prints a struct dog
 *
 * @d: struct dog to print
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			d->name = "(nil)";
		else
			printf("%s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			d->owner = "(nil)";
		else
			printf("%s\n", d->owner);
	}
}
