/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:59:42 by ntardy            #+#    #+#             */
/*   Updated: 2023/02/05 21:34:18 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_data	g_data;

int	error(char *str)
{
	write(2, "error", 5);
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	long int	nb;
	int			i;

	nb = 0;
	i = 0;
	if (!nptr)
		return (-1);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (nb > 2147483647 || nb < 0)
			return (-1);
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	if (nptr[i] || (nptr[i] <= '0' && nptr[i] >= '9'))
		return (-1);
	return (nb);
}

void	send_sig(void)
{
	int		i;
	char	c;

	while (g_data.message[g_data.count_i])
	{
		c = g_data.message[g_data.count_i];
		i = 8;
		while (i--)
		{
			if (c >> i & 1)
				kill(g_data.pid, SIGUSR2);
			else
				kill(g_data.pid, SIGUSR1);
			usleep(10000);
		}
		g_data.count_i++;
	}
	i = 8;
	while (i--)
	{
		kill(g_data.pid, SIGUSR1);
		usleep(10000);
	}
	exit (0);
}

void	handler(int signum)
{
	if (signum == SIGUSR2)
		exit (0);
}

int	main(int argc, char *argv[])
{
	g_data.count_i = 0;
	if (argc != 3)
		return (error(", wrong number of argument"));
	g_data.pid = ft_atoi(argv[1]);
	if (g_data.pid == -1)
		return (error(", enter a valid pid"));
	g_data.message = argv[2];
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	send_sig();
	while (1)
	{
		pause();
	}
	return (0);
}
