#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This fuction creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: pointer to the new dog.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *zira;
	char *n, *o;
	int a = 0, b = 0;

	zira = malloc(sizeof(dog_t));
	if (zira == NULL)
		return (NULL);
	for (; *(name + a); a++)
		;
	for (; *(owner + b); b++)
		;
	n = (char *)malloc(sizeof(a));
	o = (char *)malloc(sizeof(b));

	if (!(n && o))
	{
		free(n);
		free(o);
		free(zira);
		return (NULL);
	}
	for (; a >= 0; a--)
		*(n + a) = *(name + a);
	for (; b >= 0; b--)
		*(o + a) = *(owner + b);
	zira->name = n;
	zira->age = age;
	zira->owner = o;
	return (zira);
}
