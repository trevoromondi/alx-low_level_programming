#include "main.h"

/**
 * _memcpy - copy memory dat from src to dest
 * @dest: mem dest
 * @src: mem src
 * @n: size of new mem
 * Return: void
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t x;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (x = 0; x < n; x++)
		cdest[x] = csrc[x];
}

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: array length
 * @old_size: size of old mem
 * @new_size: size of new mem
 * Return: pointer to new mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		newPtr = malloc(new_size);
		if (newPtr)
		{
			_memcpy(newPtr, ptr, old_size);
			free(ptr);
		}
		return (newPtr);
	}
	return (0);
}
