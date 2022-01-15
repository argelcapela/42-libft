/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:44:27 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:44:27 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*strd;

	i = 0;
	strd = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!strd)
		return (NULL);
	while (s[i])
	{
		strd[i] = s[i];
		i++;
	}
	strd[i] = '\0';
	return (strd);
}
