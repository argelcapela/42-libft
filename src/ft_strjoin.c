/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:34:31 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/18 06:51:52 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		ls1;
	size_t		ls2;
	char		*newstr;

	ls1 = -1;
	ls2 = -1;
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	while (s1[++ls1])
		newstr[ls1] = s1[ls1];
	while (s2[++ls2])
		newstr[ls1 + ls2] = s2[ls2];
	newstr[ls1 + ls2] = '\0';
	free(s1);
	s1 = NULL;
	return (newstr);
}
