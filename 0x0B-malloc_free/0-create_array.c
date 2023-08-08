#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size and initialize elements with char c
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Description: Creates an array of size 'size' and initializes all elements
 * with the character 'c'.
 *
 * Return: pointer to the created array, or NULL if allocation fails
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
