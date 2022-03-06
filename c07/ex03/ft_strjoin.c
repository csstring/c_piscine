/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:17:35 by schoe             #+#    #+#             */
/*   Updated: 2022/02/21 14:42:41 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen_3(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	i;
	int	tot_size;

	tot_size = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size)
			tot_size += ft_strlen_3(strs[i++]);
		tot_size += ft_strlen_3(sep) * (size - 1);
		return (tot_size);
	}
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tot_size;
	char	*arr;

	tot_size = ft_size(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * (tot_size + 1));
	if (!arr)
		return (0);
	i = 0;
	arr[0] = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
