/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkyttala <rkyttala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:03:30 by rkyttala          #+#    #+#             */
/*   Updated: 2020/09/07 19:13:24 by rkyttala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;
	t_list		*tmp2;

	tmp = *alst;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = tmp2;
	}
	*alst = NULL;
}
