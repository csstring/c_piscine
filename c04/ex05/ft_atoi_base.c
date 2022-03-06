/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:27:41 by schoe             #+#    #+#             */
/*   Updated: 2022/02/14 15:12:31 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *base, int i)
{
	int	k;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 32)
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		k = 1;
		while (base[i + k])
		{
			if (base[i] == base[i + k])
				return (0);
			k++;
		}
		i++;
	}
	return (i);
}

int	ft_base_find(char c, char *base, int i)
{
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_sum(char *str, char *base, int i, int j)
{
	int	sum;

	sum = 0;
	while (str[i])
	{
		j = ft_base_find(str[i], base, 0);
		if (j < 0)
			break ;
		sum = sum * check(base, 0) + j;
		i++;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;

	minus = 1;
	i = 0;
	if (!check(base, 0))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus = -minus;
		i++;
	}
	return (minus * ft_sum(&str[i], base, 0, 0));
}
