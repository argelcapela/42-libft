/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- <acapela-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:41:09 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/10 20:45:20 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

static int	extract_number(char hexa_letter)
{
	int		n;
	char	*l_base_16;

	l_base_16 = ft_strdup("0123456789ABCDEF");
	n = 0;
	while (l_base_16[n] != ft_toupper(hexa_letter))
		n++;
	ft_free_ptr((void *) &l_base_16);
	return (n);
}

static void	convert_base(int len, char *hexa, int **integer)
{
	int	sum;
	int	exp;
	int	n;

	exp = 0;
	sum = 0;
	while (--len >= 0)
	{
		if (hexa[len])
			n = extract_number(hexa[len]);
		else
			n = 0;
		sum += n * (pow(16, exp));
		exp++;
	}
	*(*integer) = sum;
}

int	*ft_hexatoi(char *hexa)
{
	int		*integer;

	integer = (int *) malloc(sizeof(int));
	if (integer == NULL)
		return (0);
	convert_base(6, hexa, &integer);
	return (integer);
}
