/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:09:41 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/15 11:12:01 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n != 0)
	{
		while (n-- - 1)
		{
			if (*p1 != *p2)
				return (*p1 - *p2);
			p1++;
			p2++;
		}
		if (*p1 != *p2)
			return (*p1 - *p2);
	}
	return (0);
}
