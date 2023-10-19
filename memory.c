#include "shell.h"

/**
* bfree - Frees a pointer and sets it to NULL
* @ptr: address of the pointer to be freed
*
* Returns: 1 if freed , otherwise 0.
*/
int bfree(void **ptr)
{
	if (ptr && *ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (1);
}
return (0);
}

