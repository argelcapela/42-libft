/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:29 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

// Amount of spaces to be added before is equal to (width - 1) because is
// for the c type, but strings have the amount of spaces equal to
// width -= strlen
static char	*put_width(char *c, t_fs_arg *arg)
{
	char	*width;

	arg->width -= 1;
	if (arg->width > 0)
	{
		width = ft_chr_to_str(' ', arg->width);
		if (arg->minus)
			c = ft_str_merge(c, width);
		else
			c = ft_str_merge(width, c);
	}
	return (c);
}

// %c
char	*translate_to_char(t_fs_arg *arg, char *fmt, int value)
{
	char	*c;
	char	*tmp;

	if (value == 0)
		c = ft_strdup(TOKENIZATION_NULL);
	else
		c = ft_chr_to_str(value, 1);
	c = put_width(c, arg);
	tmp = ft_str_replace(fmt, arg->argument, c);
	ft_free_ptr((void *) &c);
	return (tmp);
}
