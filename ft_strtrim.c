/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:55:55 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/09/24 20:16:52 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_initial(char const *s1, char const *set);
static int	found_final(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		t;
	char	*ptr;

	t = 0;
	if (s1 == NULL)
		return (NULL);
	if (found_final(s1, set) < found_initial(s1, set))
	{
		ptr = malloc(1 * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc((found_final(s1, set)
				- found_initial(s1, set) + 2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (t <= (found_final(s1, set) - found_initial(s1, set)))
	{
		ptr[t] = s1[found_initial(s1, set) + t];
		t++;
	}
	ptr[t] = '\0';
	return (ptr);
}

static int	found_initial(char const *s1, char const *set)
{
	int		t;
	int		v;
	int		boolean;

	t = 0;
	boolean = 0;
	while (s1[t] != '\0')
	{
		v = 0;
		boolean = 0;
		while (set[v] != '\0' && boolean == 0)
		{
			if (s1[t] == set[v])
				boolean = 1;
			v++;
		}
		if (boolean == 0)
			return (t);
		t++;
	}
	return (t);
}

static int	found_final(char const *s1, char const *set)
{
	int		t;
	int		v;
	int		boolean;

	t = ft_strlen(s1) - 1;
	while (t > 0)
	{
		v = 0;
		boolean = 0;
		while (set[v] != '\0' && boolean == 0)
		{
			if (s1[t] == set[v])
				boolean = 1;
			v++;
		}
		if (boolean == 0)
			return (t);
		t--;
	}
	return (t);
}
