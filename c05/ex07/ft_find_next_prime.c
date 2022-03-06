/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:36:56 by schoe             #+#    #+#             */
/*   Updated: 2022/02/14 11:56:28 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_07(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 2;
	while (1)
	{
		if (ft_is_prime_07(nb) == 1)
			return (nb);
		nb++;
	}
}
