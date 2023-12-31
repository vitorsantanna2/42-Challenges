/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:18:13 by jsantann          #+#    #+#             */
/*   Updated: 2022/08/18 02:18:18 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_atol(char *str)
{
	long long int	result;
	long long int	i;
	long long int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i])
		result = result * 10 + str[i++] - '0';
	return (result * sign);
}
