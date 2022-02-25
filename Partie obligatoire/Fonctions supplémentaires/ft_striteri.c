/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:52 by faventur          #+#    #+#             */
/*   Updated: 2022/02/25 17:19:45 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The striteri() function applies the f function to every character of
** the string passed as a parameter by specifying its index as the first
** argument. Every character is passed by address to the f function so
** that it may be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] && s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
