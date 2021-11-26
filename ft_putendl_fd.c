/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:32:09 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/10/02 12:45:12 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	void	*buffer;
	void	*jumpline;
	char	c;

	if (s != NULL)
	{
		c = '\n';
		jumpline = &c;
		buffer = s;
		write(fd, buffer, sizeof(char) * ft_strlen(s));
		write(fd, jumpline, sizeof(char));
	}
}
