/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:10:19 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/24 20:16:34 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*s_dst;
	const unsigned char	*s_src;

	if (dst == NULL && src == NULL)
		return (dst);
	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	count = 0;
	while (count != n)
	{
		s_dst[count] = s_src[count];
		count++;
	}
	return (dst);
}
