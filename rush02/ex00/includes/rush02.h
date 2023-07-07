#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list
{
	int				key;
	char				*content;
	struct s_list	*next;
}	t_list;

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
void	select_numbers(int num, t_list *dict);
void	find_number_less_1000000(int num, t_list *dict);
void	find_number_less_1000(int num, t_list *dict);
void	find_number_less_100(int num, t_list *dict);
void	find_number_less_20(int num, t_list *dict);
void	print_stack(t_list *stack);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *b, size_t len);
void	*ft_memset(void	*b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
t_list	*ft_lstnew(int key, char *content);
void	*ft_lstend(t_list **lst, int key, char *content);
int	ft_atoi(const char *str);
char	**split_gnl(char *gnl);
char	**ft_split(char const *s, char c);
char	*get_content(char **split_gnl);
int	get_key(char **split_gnl);
int	is_positive(int num);
int	ft_isdigit(char *c);
void	create_list(int fd, int num);
#endif
