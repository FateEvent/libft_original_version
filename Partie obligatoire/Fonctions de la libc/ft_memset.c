/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:10:54 by faventur          #+#    #+#             */
/*   Updated: 2022/02/22 17:29:14 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memset() function fills the first n bytes of the memory area
** pointed to by s with the constant byte c.
** 
** Return Value: The memset() function returns a pointer to the
** memory area s.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (s);
}
