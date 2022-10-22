/**
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
