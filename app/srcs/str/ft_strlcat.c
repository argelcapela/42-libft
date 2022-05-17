/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:44:55 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:44:55 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size <= ldest)
		return (size + lsrc);
	while ((ldest + i + 1) < size && src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (ldest + lsrc);
}
