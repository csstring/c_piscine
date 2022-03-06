/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:23:20 by schoe             #+#    #+#             */
/*   Updated: 2022/02/22 10:19:53 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (i < length - 1 && temp == 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			temp = 0;
		i++;
	}
	if (temp == 0)
	{
		i = 0;
		temp = 1;
		while (i < length - 1 && temp == 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				temp = 0;
			i++;
		}
	}
	if (temp == 0)
		return (0);
	return (1);
}
