#include "main.h"

/**
 *_strcat - function appends the @src string to the @dest string, overwriting the terminating null byte at the end of @dest
 *@dest: String that will be appended
 *@src: String to be overwritten
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
