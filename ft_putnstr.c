/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikikytt <rikikytt@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:26:28 by rikikytt          #+#    #+#             */
/*   Updated: 2020/08/25 22:03:53 by rkyttala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(const char *str, int n)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (i < n && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
