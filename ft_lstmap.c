/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:44:34 by faventur          #+#    #+#             */
/*   Updated: 2022/02/28 15:16:43 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstmap() function iterates in the list passed as a parameter
** and applies the f function to the content of every element of the
** list. It creates a new list resulting from the successive
** applications of f. The del function is present in order to destroy
** an element if necessary.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	lst_len;
	t_list	*new_lst;
	t_list	*list_ptr;

	lst_len = ft_lstsize(lst);
	new_lst = (t_list *)malloc(sizeof(t_list) * (lst_len + 1));
	if (!new_lst)
		return (NULL);
	list_ptr = new_lst;
	while (lst != NULL)
	{
		new_lst->content = malloc(sizeof(lst->content));
		new_lst->content = f(lst->content);
		if (!new_lst->content)
			ft_lstclear(&list_ptr, del);
		lst = lst->next;
		new_lst = new_lst->next;
	}
	new_lst = NULL;
	return (new_lst);
}
