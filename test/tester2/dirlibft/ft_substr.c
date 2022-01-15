/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:46:08 by acapela-          #+#    #+#             */
/*   Updated: 2021/09/19 21:46:08 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	totallen;
	char	*substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	totallen = ft_strlen(s);
	if (totallen < start)
		return (ft_strdup(""));
	totallen = ft_strlen(s + start);
	if (len > totallen)
		len = totallen;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
