/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:02:52 by schoe             #+#    #+#             */
/*   Updated: 2022/02/16 19:35:58 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		arr = (int *)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		return (arr);
	}
}
