/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:41:09 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/10 20:45:25 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

static int	len(size_t n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	convert_base(size_t n, char *str, int *i, char *base)
{
	size_t	nb;

	nb = ft_strlen(base);
	if (n >= nb && n)
	{
		convert_base(n / nb, str, i, base);
		convert_base(n % nb, str, i, base);
	}
	else
		str[(*i)++] = base[n];
}

char	*ft_uitoa_base(size_t n, char *base)
{
	char	*str;
	int		i;

	str = malloc(len(n) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	convert_base(n, str, &i, base);
	str[i] = '\0';
	return (str);
}
