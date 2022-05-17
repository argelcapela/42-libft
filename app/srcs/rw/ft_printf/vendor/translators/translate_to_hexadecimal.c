/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_hexadecimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:38 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_flags(char *hexadecimal, t_fs_arg *arg, size_t value)
{
	if (arg->hash && value > 0)
		hexadecimal = ft_str_merge(ft_strdup("0x"), hexadecimal);
	return (hexadecimal);
}

static char	*put_width(char *string, t_fs_arg *arg)
{
	char	*padding;
	char	ch;

	arg->width -= ft_strlen(string);
	if (arg->width > 0)
	{
		if (arg->zero == 0)
			ch = ' ';
		else
			ch = '0';
		if (arg->hash)
		{
			arg->width -= 2;
			string = ft_str_merge(ft_strdup("0x"), string);
			arg->hash = 0;
		}
		padding = ft_chr_to_str(ch, arg->width);
		if (arg->minus && arg->zero == 0)
			string = ft_str_merge(string, padding);
		else
			string = ft_str_merge(padding, string);
	}
	return (string);
}

static char	*put_precision(char *string, t_fs_arg *arg)
{
	char	*padding;

	arg->precision -= ft_strlen(string);
	if (arg->dot && arg->precision > 0)
	{
		padding = ft_chr_to_str('0', arg->precision);
		string = ft_str_merge(padding, string);
	}
	return (string);
}

// %x, %X
char	*translate_to_hexadecimal(t_fs_arg *arg, char *fmt, size_t value)
{
	char	*hexadecimal;
	size_t	i;
	size_t	len;

	hexadecimal = ft_uitoa_base(value, "0123456789abcdef");
	hexadecimal = put_precision(hexadecimal, arg);
	hexadecimal = put_width(hexadecimal, arg);
	hexadecimal = put_flags(hexadecimal, arg, value);
	len = 0;
	len = ft_strlen(hexadecimal);
	if (arg->type == 'X')
	{
		i = 0;
		while (i < len)
		{
			hexadecimal[i] = ft_toupper(hexadecimal[i]);
			i++;
		}
	}
	fmt = ft_str_replace(fmt, arg->argument, hexadecimal);
	ft_free_ptr((void **) &hexadecimal);
	return (fmt);
}
