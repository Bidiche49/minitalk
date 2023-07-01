/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:59:41 by ntardy            #+#    #+#             */
/*   Updated: 2023/02/05 21:34:41 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*str_cat(char src, char *message)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	tmp = malloc(sizeof(char) * (ft_strlen(message) + 2));
	while (message && message[i])
	{
		tmp[i] = message[i];
		i++;
	}
	tmp[i] = src;
	tmp[i + 1] = '\0';
	free(message);
	return (tmp);
}
