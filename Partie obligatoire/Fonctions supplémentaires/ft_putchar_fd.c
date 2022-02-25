/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:27:48 by faventur          #+#    #+#             */
/*   Updated: 2022/02/25 18:25:38 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putchar_fd() function writes a character on the file descriptor. 
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0 && fd <= 2)
		write(fd, &c, 1);
	else
		return ;
}
