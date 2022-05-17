/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_format_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 06:53:56 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:06 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/* Identifies the letter, representing the type of data that will be
printted in printf,  and after executes a function to treat this specific type
of data, and so produce a string, after, this string will be printed by
ft_putstr_fd function. */

char	*what_format_type(char type, char *fmt, t_fs_arg *arg, va_list *vl)
{
	if (type == '%')
		fmt = translate_percent(fmt);
	else if (type == 'c')
		fmt = translate_to_char(arg, fmt, va_arg(*vl, int));
	else if (type == 's')
		fmt = translate_to_string(arg, fmt, va_arg(*vl, char *));
	else if (type == 'p')
		fmt = translate_to_pointer(arg, fmt, va_arg(*vl, unsigned long int));
	else if (type == 'i')
		fmt = translate_to_integer(arg, fmt, va_arg(*vl, int));
	else if (type == 'd')
		fmt = translate_to_decimal(arg, fmt, va_arg(*vl, int));
	else if (type == 'u')
		fmt = translate_to_unsigned_int(arg, fmt, va_arg(*vl, unsigned int));
	else if (type == 'x' || type == 'X')
		fmt = translate_to_hexadecimal(arg, fmt, va_arg(*vl, unsigned int));
	return (fmt);
}
