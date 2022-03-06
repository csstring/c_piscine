/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:48:06 by schoe             #+#    #+#             */
/*   Updated: 2022/02/12 11:09:59 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (nb >= 0)
	{
		while (i < nb)
		{
			i++;
			num *= i;
		}
		return (num);
	}
	else
		return (0);
}
