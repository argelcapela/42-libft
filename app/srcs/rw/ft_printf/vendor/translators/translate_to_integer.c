/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_to_integer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:35:02 by acapela-          #+#    #+#             */
/*   Updated: 2022/02/01 05:07:37 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*put_flags(char *string, t_fs_arg *arg)
{
	if (arg->has_visible_signal == 1)
		string = ft_str_merge(ft_chr_to_str(arg->visible_signal, 1), string);
	if (arg->space == 1 && arg->width <= 0)
		string = ft_str_merge(ft_chr_to_str(' ', 1), string);
	return (string);
}

static char	*put_width(char *string, t_fs_arg *arg)
{
	arg->width -= ft_strlen(string);
	if (arg->has_visible_signal == 1)
		arg->width--;
	if ((arg->precision > 0 && arg->width > 0)
		|| (arg->width > 0 && arg->zero == 0))
	{
		if (arg->has_visible_signal == 1)
		{
			string = ft_str_merge(ft_chr_to_str(arg->visible_signal, 1),
					string);
			arg->has_visible_signal = 0;
		}
		if (arg->minus == 0)
			string = ft_str_merge(ft_chr_to_str(' ', arg->width), string);
		else if (arg->minus == 1)
			string = ft_str_merge(string, ft_chr_to_str(' ', arg->width));
	}
	else if (arg->zero == 1 && arg->width > 0)
		string = ft_str_merge(ft_chr_to_str('0', arg->width), string);
	return (string);
}

static char	*put_precision(char *string, t_fs_arg *arg)
{
	string = has_visible_signal(string, arg);
	arg->precision -= ft_strlen(string);
	if (arg->precision > 0)
		string = ft_str_merge(ft_chr_to_str('0', arg->precision), string);
	return (string);
}

// %i
char	*translate_to_integer(t_fs_arg *arg, char *fmt, int value)
{
	char	*integer;

	integer = ft_itoa(value);
	integer = put_precision(integer, arg);
	integer = put_width(integer, arg);
	integer = put_flags(integer, arg);
	fmt = ft_str_replace(fmt, arg->argument, integer);
	ft_free_ptr((void **) &integer);
	return (fmt);
}
