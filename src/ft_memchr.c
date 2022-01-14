/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:42:44 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:42:44 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned int	i;
	unsigned char	*xstr;

	i = 0;
	xstr = (unsigned char *) str;
	while (i < n)
	{
		if (xstr[i] == (unsigned char)ch)
		{
			xstr += i;
			return ((void *)xstr);
		}
		i++;
	}
	return (NULL);
}
