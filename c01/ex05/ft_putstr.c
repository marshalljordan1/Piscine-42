/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarshal <jmarshal@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:19:29 by jmarshal          #+#    #+#             */
/*   Updated: 2021/12/15 14:42:21 by jmarshal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)

{
	char	j;

	while (*str != '\0')
	{
		j = *str;
		write(1, &j, 1);
		str++;
	}
}
