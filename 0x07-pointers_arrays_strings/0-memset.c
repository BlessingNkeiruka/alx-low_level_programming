#include "main.h"

/**
 * memset -  fills the first bytes of the memory area with the constant byte
 * @n: size of memory to print
 * @s: pointer to memory area
 * @b: address of memory to print
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* set pointer address to variable s */
	char *p = s;
	
	/* iterate through character in memory address till size n */
	while (n--)
	{
		/* append character in memory to buffer with each iter*/
		*p++ = (unsigned char)b;
	}
	return (s); /* return copied memory */
}
