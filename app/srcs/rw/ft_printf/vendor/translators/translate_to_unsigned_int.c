/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_unsigned_int.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:53 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

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

// %u
char	*translate_to_unsigned_int(t_fs_arg *arg, char *fmt, unsigned int value)
{
	char	*u_int;

	u_int = ft_uitoa_base(value, "0123456789");
	u_int = put_width(u_int, arg);
	u_int = put_precision(u_int, arg);
	fmt = ft_str_replace(fmt, arg->argument, u_int);
	ft_free_ptr((void **) &u_int);
	return (fmt);
}
