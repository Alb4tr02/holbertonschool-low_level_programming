#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - This fuction generate valid key for a crackme
 * Return: 0 if all it's ok
 */

int main(void)
{
	int num = 3;
	int top = 0;
	int w = ('~' - ' ') + 1;

	srand(time(NULL));
	do {
		num = ' ' + (rand() % w);
		printf("%c", num);
		top = top + num;
	} while (top < 2752);
	num = 2772 - top;
	printf("%c", num);
	return (0);
}
