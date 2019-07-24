/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to the function that it's going to print
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
