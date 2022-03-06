/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapialize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:25:26 by schoe             #+#    #+#             */
/*   Updated: 2022/02/12 19:31:19 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_small(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	ft_str_small(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (k == 1)
				str[i] -= 32;
			k = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			k = 0;
		else
			k = 1;
		i++;
	}
	return (str);
}
