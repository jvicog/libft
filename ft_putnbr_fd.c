/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvico-ga <jvico-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:38:12 by jvico-ga          #+#    #+#             */
/*   Updated: 2021/10/30 16:02:09 by jvico-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_sign(int n, long *numero, int fd);
static long	return_long(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char	*string;
	char	c;
	long	numero;
	size_t	t;
	int		v;

	check_sign(n, &numero, fd);
	t = 0;
	if (numero == 0)
		t = 1;
	while (numero > 0 && t++ != 20)
		numero = numero / 10;
	while (t-- > 0)
	{
		v = t;
		numero = return_long(n);
		while (v-- > 0)
			numero = numero / 10;
		c = (numero % 10) + 48;
		string = &c;
		write(fd, string, sizeof(char));
	}
}

static void	check_sign(int n, long *numero, int fd)
{
	char	c;
	char	*string;

	*numero = n;
	if (*numero < 0)
	{
		c = '-';
		string = &c;
		write(fd, string, sizeof(char));
		*numero *= -1;
	}
}

static long	return_long(int n)
{
	long	numero_aux;

	numero_aux = n;
	if (numero_aux < 0)
		numero_aux *= -1;
	return (numero_aux);
}
