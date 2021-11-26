/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:37:29 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/24 20:16:41 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	char	*ptr;

	t = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
		ptr[t++] = *s1++;
	while (*s2 != '\0')
		ptr[t++] = *s2++;
	ptr[t] = '\0';
	return (ptr);
}
