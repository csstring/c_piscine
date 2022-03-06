/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:26:06 by schoe             #+#    #+#             */
/*   Updated: 2022/02/14 14:50:26 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minus(char *str, int	*ptr)
{
	int	minus;

	minus = 0;
	while (str[*ptr] == 43 || str[*ptr] == 45)
	{
		if (str[*ptr] == 45)
			minus++;
		*ptr = *ptr + 1;
	}
	return (minus);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	minus;

	i = 0;
	sum = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	minus = ft_minus(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - 48;
		i++;
	}
	if (minus % 2 == 1)
		return (-1 * sum);
	else
		return (sum);
}
