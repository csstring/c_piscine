/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:20:28 by schoe             #+#    #+#             */
/*   Updated: 2022/02/21 13:24:35 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	base_find(char c, char *base);
int	check(char *base);
int	ft_space(char *str);

char	*new_base(int minus, int r, char *base_to)
{
	int		i;
	int		size;
	char	*str;

	i = r;
	size = 0;
	while (i > 0 || size == 0)
	{
		i /= check(base_to);
		size++;
	}
	str = (char *)malloc(sizeof(char) * (size + 2));
	if (str == NULL)
		return (NULL);
	if (minus == -1 && r > 0)
		i = 1;
	str[0] = '-';
	str[size + i] = '\0';
	while (size > 0)
	{
		str[size + i - 1] = base_to[r % check(base_to)];
		r /= check(base_to);
		size--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	minus;
	int	i;
	int	r;

	minus = 1;
	r = 0;
	if (check(base_from) < 0 || check(base_to) < 0)
		return (NULL);
	i = ft_space(nbr);
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			minus *= -1;
		i++;
	}
	while (base_find(nbr[i], base_from) >= 0)
	{
		r = r * check(base_from) + base_find(nbr[i], base_from);
		i++;
	}
	return (new_base(minus, r, base_to));
}
