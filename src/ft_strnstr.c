/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:45:34 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:45:34 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	i = ft_strlen(little);
	if (i == 0)
		return ((char *)big);
	if (n == 0)
		return (NULL);
	while (big[j] && (j + i - 1) < n)
	{
		while (little[k] == big[j + k])
		{
			if ((k + 1) == i)
				return ((char *)big + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (NULL);
}
