/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:22:32 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/19 17:38:22 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	t;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	t = 0;
	while (s[t])
		t++;
	ptr = malloc((t + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	t = 0;
	while (s[t])
	{
		ptr[t] = (*f)(t, s[t]);
		t++;
	}
	ptr[t] = '\0';
	return (ptr);
}
