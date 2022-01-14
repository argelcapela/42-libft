/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:43:08 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:43:08 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!cdest && !csrc)
		return (0);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		i = 1;
		while (i <= n)
		{
			cdest[n - i] = csrc[n - i];
			i++;
		}
	}
	return ((void *) cdest);
}
