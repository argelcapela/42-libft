/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:34:31 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 20:34:31 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		f;
	char		*str;

	f = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (i < ft_strlen(s1))
			str[i] = s1[i];
		else
		{
			str[i] = s2[f];
			f++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
