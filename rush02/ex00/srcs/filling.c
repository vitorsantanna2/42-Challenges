/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:51:50 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/07 23:41:09 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "get_next_line.h"

static char				**split_gnl(char *gnl);
static char				*get_content(char **split_gnl);
static long long int	get_key(char **split_gnl);

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

void	free_vars(char **splited_line, char *line)
{
	free(splited_line[0]);
	free(splited_line[1]);
	free(splited_line);
	free(line);
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
		res = split_gnl(gnl);
		if (!validate_splited_line(res))
			return (free_vars(res, gnl), print_error());
		ft_lstend(&dic, get_key(res), get_content(res));
		free_vars(res, gnl);
	}
	select_numbers(num, dic);
	write(1, "\n", 1);
	freestack(&dic);
}

static char	**split_gnl(char *gnl)
{
	char	**res;

	res = ft_split(gnl, ':');
	return (res);
}

static char	*get_content(char **split_gnl)
{
	return (ft_strtrim(split_gnl[1], "\n "));
}

static long long int	get_key(char **split_gnl)
{
	return (ft_atol(split_gnl[0]));
}
