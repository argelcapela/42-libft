/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:25:31 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/10 20:45:18 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

char	*ft_chr_to_str(int c, size_t qtd)
{
	char	*str;

	if (!c || !qtd)
		return (NULL);
	str = malloc((sizeof(char) * qtd) + 1);
	if (!str)
		return (NULL);
	ft_memset(str, c, qtd);
	str[qtd] = '\0';
	return (str);
}
