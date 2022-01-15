/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:43:16 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:43:16 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*newstr;

	i = 0;
	newstr = (unsigned char *)str;
	while (i < n)
	{
		newstr[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
