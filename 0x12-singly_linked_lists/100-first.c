#include "lists.h"
#include <stdio.h>
/**
 * my_fun - is a function that prints:
 * "You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n"
 * before the main function is executed.
 */

void __attribute__ ((constructor)) my_fun()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
