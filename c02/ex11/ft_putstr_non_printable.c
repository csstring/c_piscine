/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:57:21 by schoe             #+#    #+#             */
/*   Updated: 2022/02/12 12:58:58 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i])
		{
			if (str[i] <= 31 || str[i] >= 127)
			{
				ft_putchar('\\');
				ft_putchar("0123456789abcdef"[(str[i] + 256) % 256 / 16]);
				ft_putchar("0123456789abcdef"[(str[i] + 256) % 256 % 16]);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}
