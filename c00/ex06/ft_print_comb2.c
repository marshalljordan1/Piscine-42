/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarshal <jmarshal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:16:16 by jmarshal          #+#    #+#             */
/*   Updated: 2021/12/09 12:23:58 by jmarshal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert(int number)
{
	int	first;
	int	second;

	if (number <= 9)
	{
		ft_putchar('0');
		ft_putchar(number + 48);
	}
	else
	{
		first = number / 10;
		second = number % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			convert(i);
			ft_putchar(' ');
			convert(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
