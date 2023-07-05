#ifndef RUSH_H
# define RUSH_H
# define COL_UP 0
# define COL_DOWN 1
# define ROW_LEFT 2
# define ROW_RIGHT 3
# include <stdlib.h>
# include <unistd.h>

int		check_template(int **matrix, int i);
int		validation(char **argv);
int		validation_one_four(char **argv, int n);
int		validation_n_itens(int stop, int n);
int		mini_atoi(char num);
int		*filling_vector(char **argv, int start, int max);
int		**create_vector(char **argv);
void	free_matrix(int **square);
void	print_blank_square(int **matrix);
#endif
