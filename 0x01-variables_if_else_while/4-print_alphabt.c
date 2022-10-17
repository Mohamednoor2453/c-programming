#include<stdio.h>
/**
* main - print lowercase alphabet except e and q
* Return: 0
*/
int main(void)
{
	char rs;

	for (rs = 'a'; rs <= 'z'; rs++)
	{
		if (rs != 'e' && rs != 'q')
			putchar(rs);
	}
	putchar('\n');
	return (0);
}
