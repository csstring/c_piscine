/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:47:30 by schoe             #+#    #+#             */
/*   Updated: 2022/02/14 14:13:22 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		g_ans;
int		g_is[3][18];
char	g_arr[10];

void	ft_arr_is_p(int r, int c)
{
	g_is[0][r] = 1;
	g_is[1][r + c] = 1;
	g_is[2][c - r + 9] = 1;
	g_arr[c] = 48 + r;
}

void	ft_arr_is_m(int r, int c)
{
	g_is[0][r] = 0;
	g_is[1][r + c] = 0;
	g_is[2][c - r + 9] = 0;
	g_arr[c] = 'a';
}

int	ft_queen(int c)
{
	int	r;

	r = 0;
	if (c == 10)
	{
		g_ans++;
		write(1, g_arr, 10);
		write(1, "\n", 1);
		return (0);
	}
	while (r < 10)
	{
		if (g_is[0][r] == 0 && g_is[1][r + c] == 0 && g_is[2][c - r + 9] == 0)
		{
			ft_arr_is_p(r, c);
			ft_queen(c + 1);
			ft_arr_is_m(r, c);
		}
		r++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	g_ans = 0;
	ft_queen(0);
	return (g_ans);
}
