/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:42:50 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:42:50 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*xs1;
	unsigned char	*xs2;

	i = 0;
	xs1 = (unsigned char *) s1;
	xs2 = (unsigned char *) s2;
	while (i < n)
	{
		if (xs1[i] != xs2[i])
			return (xs1[i] - xs2[i]);
		i++;
	}
	return (0);
}
