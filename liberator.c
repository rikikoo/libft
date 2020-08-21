/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liberator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyttala <rkyttala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 18:21:53 by rkyttala          #+#    #+#             */
/*   Updated: 2020/08/21 14:00:47 by rkyttala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** TODO:
** learn pointers & fix this shit.
** it doesn't free the original pointer.
*/

void	ft_liberator(int n, ...)
{
	va_list		ap;
	void		*ptr;

	va_start(ap, n);
	while (n)
	{
		ptr = va_arg(ap, void *);
		free(ptr);
		n--;
	}
	va_end(ap);
}
