/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:43:54 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 01:36:39 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

int	ft_putstr_fd(char *s, int fd)
{
	int		bytes_read;

	bytes_read = 0;
	while (*s)
	{
		if (ft_strnstr(s, TOKENIZATION_NULL, 11))
		{
			bytes_read += write(fd, "\0", 1);
			s += 11;
			continue ;
		}
		if (ft_strnstr(s, TOKENIZATION_PERCENT, 11))
		{
			bytes_read += write(fd, "%", 1);
			s += 11;
			continue ;
		}
		bytes_read += write(fd, s, 1);
		s++;
	}
	return (bytes_read);
}
