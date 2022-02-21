/**
 * The strncpy() function is similar to the strcpy() function, except that
 * at most n bytes of src are copied. Warning: If there is no null byte
 * among the first n bytes of src, the string placed in dest will not be
 * null-terminated.
 * 
 * If the length of src is less than n, strncpy() writes additional null
 * bytes to dest to ensure that a total of n bytes are written.
 * 
 * Return Value: The strncpy() function returns a pointer to the destination
 * string dest.
 */

#include <string.h>

char    *ft_strncpy(char *dest, const char *src, size_t n);

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
