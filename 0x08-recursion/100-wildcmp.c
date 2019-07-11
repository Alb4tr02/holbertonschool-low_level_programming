#include <stdio.h>

char *buscar(char c, char *p);
int comp(char *c, char *p, int a, int b);
int onlya(char *c, int a);

int wildcmp(char *s1, char *s2)
{
	if (comp(s2, s1, 0,0) == 0)
		return (1);
	return (0);
}
char *buscar(char c, char *p)
{
	if (c == '*')
		return (p);
	if (*p == 0)
		return (0);
	if (c == *p)
		return (p);
	return (buscar(c, (p + 1)));
}
int comp(char *c, char *p, int a, int b)
{
	if (b == 0)
	{
		if (onlya(c, 0) == 0)
			return (a);
	}
	if (*p == 0 && *c != 0)
	{
		if (onlya(c, 0) == 0)
			return (a);
		return (a + 1);
	}
	if (*c == 0)
		return a;
	if (*(c + 1) == 0 && *c != '*' && p != 0)
	{
		if (*(p + 1) == 0 && *p == *c)
			return a;
		return (a + 1);
	}
	if (*c == '*')
		comp((c + 1),(buscar(*(c + 1), p)), a, 1);
	else
	{
		if (buscar(*c, p) == 0)
		{
			a++;
			return (a);
		}
		else
		{
			comp((c + 1),(buscar(*c, p)) + 1, a, 1);
		}
	}
	return (1);
}
int onlya(char *c, int a)
{
	if (*c == 0)
		return (a);
	if (*c != '*')
	{
		a++;
		onlya((c + 1), a);
		return (a);
	}
	return (a);
}
