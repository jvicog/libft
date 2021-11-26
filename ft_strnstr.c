/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:13:54 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/15 11:45:43 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_saved;
	const char	*needle_saved;
	size_t		len_saved;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack != '\0' && len)
	{
		haystack_saved = haystack;
		needle_saved = needle;
		len_saved = len;
		while (*haystack++ == *needle++ && len)
		{
			if (*needle == '\0')
				return ((char *)haystack_saved);
			len--;
		}
		needle = needle_saved;
		haystack = haystack_saved;
		haystack++;
		len = len_saved - 1;
	}
	return (NULL);
}
