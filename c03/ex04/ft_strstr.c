/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:54:27 by schoe             #+#    #+#             */
/*   Updated: 2022/02/09 12:11:41 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s])
	{
		f = 0;
		while (str[s + f] == to_find[f] && str[s + f])
		{
			if (to_find[f + 1] == '\0')
				return (&str[s]);
			f++;
		}
		s++;
	}
	return (0);
}
