#include "holberton.h"

/**
 * _strlen_recursion - This fuction only return the length of a  string
 * @s:  is the pointer to the string
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	return ((*s == 0) ? 0 : (1 + _strlen_recursion((s + 1))));
}
