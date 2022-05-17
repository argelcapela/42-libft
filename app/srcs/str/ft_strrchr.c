/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:45:50 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:45:50 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	*ft_strrchr(const char *str, int ch)
{
	int	j;

	j = 0;
	if (str == NULL)
		return (NULL);
	j = ft_strlen(str);
	while (j >= 0)
	{
		if (str[j] == (unsigned char)ch)
			return ((char *)(str + j));
		j--;
	}
	return (NULL);
}
