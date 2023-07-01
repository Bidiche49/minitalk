/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:32:51 by ntardy            #+#    #+#             */
/*   Updated: 2023/01/26 11:33:06 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(const char *str)
{
	const char	*tmp;

	if (str == NULL)
		return (0);
	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}
