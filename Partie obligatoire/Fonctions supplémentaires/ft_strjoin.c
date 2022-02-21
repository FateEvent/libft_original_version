/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:49:11 by faventur          #+#    #+#             */
/*   Updated: 2022/01/31 10:49:11 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strjoin() function allocates (with malloc(3)) and returns a
** "fresh" null-terminated string resulting from the concatenation of
** s1 and s2. If the allocation fails, the function returns a NULL
** pointer.
**
** Return Value: The function returns a string.
*/

#include <stdlib.h>

char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strlen(char *str);
char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len == 0 && s2_len == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str == NULL)
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}

size_t	ft_strlen(char *str)
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

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char	*ft_strcat(char *dest, const char *src)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
