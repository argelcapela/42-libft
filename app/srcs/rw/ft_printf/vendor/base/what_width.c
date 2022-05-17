/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:13:51 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:14 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/* Width works directly with the flags, it basically is a number that
indicates the amount of times that, the flags will appear on the output,
spaces and zeros mainly.*/
void	what_width(t_fs_arg *arg, const char **format, va_list *vl)
{
	if (ft_isdigit(**format))
	{
		while (ft_isdigit(**format))
		{
			arg->width = (arg->width * 10) + (**format - '0');
			*arg->argument++ = *(*format)++;
		}
	}
	else if (**format == '*')
	{
		arg->width = va_arg(*vl, int);
		*arg->argument++ = '*';
	}
}
