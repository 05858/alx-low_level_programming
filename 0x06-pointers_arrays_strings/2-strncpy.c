#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination Input buffer
 * @src: pointer to source input buffar
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through are array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * If the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
