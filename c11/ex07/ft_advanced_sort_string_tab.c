/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:49:44 by schoe             #+#    #+#             */
/*   Updated: 2022/02/23 10:11:55 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap7(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strlen7(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen7(tab);
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				ft_swap7(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
