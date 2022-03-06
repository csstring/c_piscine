/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:26:03 by schoe             #+#    #+#             */
/*   Updated: 2022/02/22 18:09:40 by schoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_error(int b, char op)
{
	if (b == 0)
	{
		if (op == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (op == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	}
	return (1);
}

void	ft_do_op(int a, int b, char *op)
{
	int		i;
	int		ans;
	char	*arr_op;
	int		(*do_op[5])(int, int);

	i = 0;
	arr_op = "+-%/*";
	do_op[0] = &ft_plus;
	do_op[1] = &ft_minus;
	do_op[2] = &ft_mod;
	do_op[3] = &ft_div;
	do_op[4] = &ft_multi;
	if (!ft_error(b, op[0]))
		return ;
	while (i < 5)
	{
		if (arr_op[i] == op[0])
		{
			ans = (do_op[i])(a, b);
			ft_putnbr(ans);
			ft_putstr("\n");
			break ;
		}
		i++;
	}
}

int	check_op(char *op)
{
	int	i;

	i = 0;
	while (op[i])
		i++;
	if (i > 1)
		return (0);
	if (!(op[0] == '+' || op[0] == '-' \
				|| op[0] == '/' || op[0] == '*' || op[0] == '%'))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		if (check_op(av[2]))
			ft_do_op(a, b, av[2]);
		else
		{
			ft_putnbr(0);
			ft_putstr("\n");
		}
	}
	return (0);
}
