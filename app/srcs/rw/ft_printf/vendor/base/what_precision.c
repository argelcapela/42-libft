/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:13:51 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:10 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

/* It's similar to width, also is a number, but is located after the dot(.), it
 indicates: for s, the amount of bytes to be printed. for f (this type is not
used in 42 ft_printf, but I am talking just to teach you) indicates the amount
of decimal places after the comma, and for d,i,u. indiates the amount of zeros
to be printed before the number, it's similar to width with space flag.*/

void	what_precision(t_fs_arg *arg, const char **format, va_list *vl)
{
	if (**format == '.')
	{
		arg->dot = 1;
		*arg->argument++ = *(*format)++;
		if (ft_isdigit(**format))
		{
			arg->precision = 0;
			while (ft_isdigit(**format))
			{
				arg->precision = (arg->precision * 10) + (**format - '0');
				*arg->argument++ = *(*format)++;
			}
		}
		else if (**format == '*')
		{
			arg->precision = va_arg(*vl, int);
			*arg->argument++ = '*';
		}
	}
}
