#include "shell.h"

/**
* _memset - Fills a memory area with a constant byte
* @s: Pointer to the memory area
* @byte: The byte value to fill dest with
* @n: The number of bytes to fill
* Return: Pointer to the memory area dest
*/
char *_memset(char *dest, char byte, unsigned int size)
{
unsigned int i;

for (i = 0; i < size; i++)
s[i] = byte;
return (s);
}

/**
* ffree - frees a string of strings
* @pp: string of strings
*/
void ffree(char **pp)
{
char **a = pp;
  
if (!pp)
return;
while (*pp)
free(*pp++);
free(a);
}

/**
* _realloc - Reallocates a block of memory
* @ptr: Pointer to the previous malloc'ated block
* @old_size: Byte size of the previous block
* @new_size: Byte size of the new block
*
* Return: Pointer to the reallocated block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;

  if (!ptr)
  return (malloc(new_size));
if (!new_size)
  return (free(ptr), NULL);
if (new_size == old_size)
  return (ptr);

p = malloc(new_size);
if (!p)
return NULL;

old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
p[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (p);
}
