/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:34:20 by schoe             #+#    #+#             */
/*   Updated: 2022/02/09 11:34:41 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	loop_print(int i, int n, char *arr)
{
	while (arr[i] <= '9')
	{
		if (arr[i + 1] == '\0')
		{
			while (1)
			{
				write(1, arr, n);
				if (arr[0] != 58 - n)
					write(1, ", ", 2);
				if (arr[i] == '9')
					return ;
				arr[i] = arr[i] + 1;
			}
		}
		arr[i + 1] = arr[i] + 1;
		loop_print(i + 1, n, arr);
		arr[i] = arr[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int		s;
	char	arr[10];

	s = 0;
	while (s < n)
	{
		arr[s] = s + '0';
		s++;
	}
	arr[s] = '\0';
	loop_print(0, n, arr);
}
