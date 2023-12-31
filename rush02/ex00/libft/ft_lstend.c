/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:46:28 by jsantann          #+#    #+#             */
/*   Updated: 2023/07/07 23:43:28 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	*ft_lstend(t_list **lst, long long int key, char *content)
{
	t_list	*temp;

	temp = *lst;
	if (!temp)
	{
		*lst = ft_lstnew(key, content);
		return (lst);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ft_lstnew(key, content);
	return (temp);
}
