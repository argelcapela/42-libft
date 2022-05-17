/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:33:24 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 20:33:24 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		mais1;
	char	c;

	mais1 = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n += 1;
			mais1 = 1;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	if (n < 10)
	{
		c = '0' + n;
		write (fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10 + mais1, fd);
	}
}
