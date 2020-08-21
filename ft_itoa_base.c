/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rikikytt <rikikytt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:26:10 by rikikytt          #+#    #+#             */
/*   Updated: 2020/08/17 16:27:58 by rikikyttala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*convert_base(unsigned long long n, int base, int len, int cap)
{
	unsigned long long		tmp;
	char					*nb;
	char					*str;

	tmp = n;
	nb = "0123456789abcdef";
	if (!(str = (char *)malloc(sizeof(char) * len) + 1))
		return (0);
	str[len] = '\0';
	len--;
	while (n > 0 && len >= 0)
	{
		tmp = n % base;
		n = n / base;
		if (cap > 0 && tmp >= 10)
			str[len] = nb[tmp] - 32;
		else
			str[len] = nb[tmp];
		len--;
	}
	return (str);
}

char			*ft_itoa_base(unsigned long long n, int base, int cap)
{
	int						len;
	unsigned long long		tmp;

	len = 0;
	tmp = n;
	if (base < 2 || base > 16)
		return (0);
	while (tmp > 0)
	{
		tmp = tmp / base;
		len++;
	}
	return (convert_base(n, base, len, cap));
}
