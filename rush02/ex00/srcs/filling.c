/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:51:50 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/08 00:22:54 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "get_next_line.h"

static char	*get_content(char **split_gnl);

void	freestack(t_list **lst)
{
	t_list	*next;
	t_list	*stack;

	stack = *lst;
	while (stack)
	{
		next = stack->next;
		free(stack->content);
		free(stack);
		stack = next;
	}
}

int	validate_splited_line(char **splited_line)
{
	int	i;

	i = 0;
	while (splited_line[i])
		i++;
	if (i != 2 || is_digit(splited_line[0]) < 0)
		return (0);
	return (1);
}

void	create_list(int fd, long long int num)
{
	t_list	*dic;
	char	*gnl;
	char	**res;

	dic = NULL;
	while (42)
	{
		gnl = get_next_line(fd);
		if (!gnl)
			break ;
		if (gnl[0] == '\n')
		{
			free(gnl);
			continue ;
		}
		res = ft_split(gnl, ':');
		if (!validate_splited_line(res))
			return (free_vars(res, gnl), print_error());
		ft_lstend(&dic, ft_atol(res[0]), get_content(res));
		free_vars(res, gnl);
	}
	select_numbers(num, dic);
	write(1, "\n", 1);
	freestack(&dic);
}

static char	*get_content(char **split_gnl)
{
	return (ft_strtrim(split_gnl[1], "\n "));
}
