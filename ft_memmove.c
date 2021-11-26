/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:10:51 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/15 13:01:50 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*s_dst;
	const unsigned char	*s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (s_dst > s_src && (s_src + n > s_dst))
	{
		s_dst = s_dst + n - 1;
		s_src = s_src + n - 1;
		while (n--)
			*s_dst-- = *s_src--;
	}
	else
	{
		while (n--)
			*s_dst++ = *s_src++;
	}
	return (dst);
}
