/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:46:28 by jsantann          #+#    #+#             */
/*   Updated: 2022/12/07 18:47:54 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	*ft_lstend(t_list **lst, int key, char *content)
{
	t_list	*temp;

	temp = *lst;
	if (!temp)
		return (NULL);
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ft_lstnew(key, content);
	return (temp);
}
