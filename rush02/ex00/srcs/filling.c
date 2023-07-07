#include "rush02.h"
#include "get_next_line.h"

void	create_list(int fd)
{
	t_list *dic;
	char	*gnl;
	char	**res;

	while (42)
	{
		gnl = get_next_line(fd);
		if (!gnl)
			break ;
		if (gnl[0] == '\n')
			continue ;
		res = split_gnl(gnl);
		if (dic == NULL)
			dic = ft_lstnew(get_key(res), get_content(res));
		else
			ft_lstend(&dic, get_key(res), get_content(res));
		free(gnl);
	}
}

char	**split_gnl(char *gnl)
{
	char **res;

	res = ft_split(gnl, ':');
	return (res);
}

char	*get_content(char **split_gnl)
{
	char	*content;

	content = ft_strdup(split_gnl[1]);
	return (content);
}

int	get_key(char **split_gnl)
{
	return (ft_atoi(split_gnl[0]));
}
