/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:46:47 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/06 21:38:30 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# define N 4
# include <stdlib.h>
# include <unistd.h>

int		*parse_arg(const char *arg);
void	put_error(void);
int		mini_atoi(char num);
void	mini_put_nbr(int n);
void	put_char(char c);
void	print_matrix(int matrix[N][N]);
int		is_valid_row_col(int arr[N], int right, int left);
int		is_all_cols_valid(int matrix[N][N], int *borders);
int		solve_skycraper(int *boarders);
#endif
