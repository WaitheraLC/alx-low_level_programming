#include "main.h"
#include <stdlib.h>

/**
 * create_arraycreate array of size and assign char c
 * @size : size of array
 * @char : char to assign
 * Description :create array of size and assign char c
 * Return :pointer to array,NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
