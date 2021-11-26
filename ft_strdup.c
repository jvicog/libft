/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:11:43 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/24 20:16:39 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	t;
	char	*ptr;

	t = 0;
	while (s1[t] != '\0')
		t++;
	ptr = malloc(t * sizeof(char) + sizeof(char));
	if (ptr == NULL)
		return (NULL);
	t = 0;
	while (s1[t] != '\0')
	{
		ptr[t] = s1[t];
		t++;
	}
	ptr[t] = '\0';
	return (ptr);
}
