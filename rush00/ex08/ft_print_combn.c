#include<unistd.h>

void	loop_print(int i, int n, char *arr)
{
	while (arr[i] <= 58)
	{
		if (arr[i + 1] == '\0')
		{
			write(1, arr, n);
			if (arr[0] != (58 - n))
				write(1, ", ", 2);
			break ;
		}
		arr[i + 1] = arr[i] + 1;
		loop_print(i + 1, n, arr);
		arr[i]++;
	}
	arr[i] = '0';
}

void	ft_print_combn(int n)
{
	int		s;
	char	arr[11];

	s = 0;
	while (s <= n)
	{
		arr[s] = s + 48;
		s++;
	}
	arr[s] = '\0';
	loop_print(0, n, arr);
}
