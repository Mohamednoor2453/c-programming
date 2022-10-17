#include<stdio.h>
/**
* main - print lower and uppercases
* Return: 0
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);

	for  (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	return (0);
}
