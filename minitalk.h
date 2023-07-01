/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:55:55 by ntardy            #+#    #+#             */
/*   Updated: 2023/02/05 21:30:31 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/******************************************/
/*                STRUCT                  */
/******************************************/
typedef struct s_data
{
	char				*message;
	int					charac;
	int					binary[8];
	int					count_i;
	int					count_x;
	int					last_byte;
	pid_t				pid;
	struct sigaction	sa;
}					t_data;

/******************************************/
/*               Fonctions                */
/******************************************/
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa(int n);
char	*str_cat(char src, char *message);
size_t	ft_strlen(const char *str);

#endif
