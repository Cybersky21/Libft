/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 20:00:50 by acrooks           #+#    #+#             */
/*   Updated: 2018/12/16 20:00:51 by acrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*new_list;

	if (!content)
	{
		new_list = NULL;
		content_size = 0;
	}
	if (!(new_list = ft_memalloc(content_size)))
		return (NULL);
	if (!(list = (t_list *)malloc(sizeof(t_list))))
	{
		free(new_list);
		return (NULL);
	}
	list->content = new_list;
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
