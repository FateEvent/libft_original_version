/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:29:35 by faventur          #+#    #+#             */
/*   Updated: 2022/01/29 16:29:35 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the	string haystack, where no more than	len characters
 * are searched.
 * 
 * Return Value: If	needle is an empty string, haystack is returned; if
 * needle occurs nowhere in	haystack, NULL is returned; otherwise a pointer
 * to the first	character of the first occurrence of needle is returned.
 */

#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	str_len;
	size_t	find_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(haystack);
	find_len = ft_strlen(needle);
	i = 0;
	if (str_len < find_len)
		return (NULL);
	while (i <= str_len - find_len && i < len)
	{
		j = 0;
		while (j < find_len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == find_len)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
