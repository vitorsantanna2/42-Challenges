/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvieira- <pvieira-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:48:38 by pvieira-          #+#    #+#             */
/*   Updated: 2023/07/06 22:01:18 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	sastantua(int size);
void	draw_pyramid(int pyramid_id, int offset, int size);
void	write_line_with_door(int id, int borders, int size);
int		should_print_door(int pyramid_id, int c_index, int borders, int knob);

int	compute_base_size(int size)
{
	int	base;
	int	height;

	height = size + 2;
	if (size == 1)
		base = 7;
	else
	{
		base = (height / 2) * 2;
		base += (height * 2);
		base += compute_base_size(size - 1);
	}
	return (base);
}

void	sastantua(int size)
{
	int	index;
	int	base_size;
	int	offset;

	if (size > 0)
	{	
		index = 0;
		while (++index <= size)
		{
			base_size = compute_base_size(index);
			offset = ((compute_base_size(size) - base_size) / 2);
			draw_pyramid(index, offset, size);
		}
	}
}

void	draw_pyramid(int pyramid_id, int offset, int size)
{
	int	lines;
	int	l_index;
	int	c_index;
	int	borders;

	lines = 2 + pyramid_id;
	l_index = 0;
	while (l_index < lines)
	{
		c_index = 0;
		borders = lines - l_index;
		while (c_index++ < offset)
			ft_putchar(' ');
		write_line_with_door(pyramid_id, borders, size);
		ft_putchar('\n');
		l_index++;
	}
}

void	write_line_with_door(int id, int borders, int size)
{
	int	c_index;
	int	has_door;
	int	door_size;

	c_index = 1;
	door_size = 1 + 2 * ((id - 1) / 2);
	has_door = (id == size && door_size >= borders);
	while (c_index < compute_base_size(id) + 1)
	{
		if (c_index > compute_base_size(id) + 1 - borders)
			return ;
		else if (c_index < borders)
			ft_putchar(' ');
		else if (c_index == borders)
			ft_putchar('/');
		else if (c_index == compute_base_size(id) + 1 - borders)
			ft_putchar('\\');
		else if (has_door && should_print_door(id, c_index, borders, 1))
			ft_putchar('$');
		else if (has_door && should_print_door(id, c_index, borders, 0))
			ft_putchar('|');
		else
			ft_putchar('*');
		c_index++;
	}
}

int	should_print_door(int pyramid_id, int c_index, int borders, int knob)
{
	int	center;
	int	door_size;
	int	should_print;

	center = (compute_base_size(pyramid_id) / 2) + 1;
	door_size = 1 + 2 * ((pyramid_id - 1) / 2);
	if (knob == 0)
	{
		should_print = c_index >= center - door_size / 2;
		should_print &= c_index <= center + door_size / 2;
	}
	else
	{
		should_print = pyramid_id >= 5;
		should_print &= borders == (door_size / 2) + 1;
		should_print &= c_index == center + (door_size / 2) - 1;
	}
	return (should_print);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


int	main(int argc, char *argv[])
{
	int	id;

	id = 0;
	if (argc > 1)
		id = argv[1][0] - '0';
	sastantua(id);
	return (0);
}

