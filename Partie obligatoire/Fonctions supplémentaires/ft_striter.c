/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:44 by faventur          #+#    #+#             */
/*   Updated: 2022/02/25 17:14:02 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The striter() function applies the f function to every character of
** the string passed as a parameter. Every character is passed by address
** to the f function so that it may be modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	f(s);
}
