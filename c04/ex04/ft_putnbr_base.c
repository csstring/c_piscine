/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:59:45 by schoe             #+#    #+#             */
/*   Updated: 2022/02/13 10:29:11 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base, int i)
{
	int	k;
	int	p;

	p = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[p])
	{
		if (base[p] == '-' || base[p] == '+')
			return (0);
		p++;
	}
	while (base[i])
	{
		k = 1;
		while (base[i + k])
		{
			if (base[i] == base[i + k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				b;
	int				i;
	long long int	nb;

	nb = nbr;
	i = 0;
	b = ft_strlen(base);
	if (check(base, i))
	{
		if (nb < 0)
		{
			nb = -1 * nb;
			write(1, "-", 1);
		}
		if (nb >= b)
		{
			ft_putnbr_base(nb / b, base);
			ft_putnbr_base(nb % b, base);
		}
		else if (nb < b)
			write(1, &base[nb], 1);
	}
}
