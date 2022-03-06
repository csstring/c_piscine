/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:27:41 by schoe             #+#    #+#             */
/*   Updated: 2022/02/21 14:54:48 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *base)
{
	int	k;
	int	i;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' \
				|| base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (-1);
		k = i + 1;
		while (base[k])
		{
			if (base[i] == base[k])
				return (-1);
			k++;
		}
		i++;
	}
	return (i);
}

int	base_find(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	return (i);
}
