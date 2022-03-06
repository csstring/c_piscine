/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:06:23 by schoe             #+#    #+#             */
/*   Updated: 2022/02/09 13:37:07 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	d_o;

	d = 0;
	s = 0;
	d_o = 0;
	while (dest[d])
	{
		d++;
		d_o++;
	}
	while (src[s] && d_o + s + 1 < size)
	{
		dest[d++] = src[s++];
	}
	while (src[s])
		s++;
	dest[d] = '\0';
	if (d_o >= size)
		return (s + size);
	else
		return (d_o + s);
	return (0);
}
