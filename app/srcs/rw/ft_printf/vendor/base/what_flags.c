/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:13:51 by acapela-          #+#    #+#             */
/*   Updated: 2022/01/31 03:26:04 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

/* They indicates what will appear before the outputted string:

# flag - for x and X - put a 0x before the output value

0 flag + width - for d,i,u   - put zeros before the output value

+ flag - for signed number types(d,i) non negative - put a + signal before the
 output value

- flag - for all types,if they have spaces added - invert the spaces from
before the output to after the output, in other words it align the output to
 left.

' ' flag + width or not - for all types, add spaces before the output value */

void	what_flags(t_fs_arg *arg, const char **format)
{
	while (1)
	{
		if (*(*format) == '#')
			arg->hash = 1;
		else if (*(*format) == '-')
			arg->minus = 1;
		else if (*(*format) == '+')
			arg->plus = 1;
		else if (*(*format) == ' ')
			arg->space = 1;
		else if (*(*format) == '0')
			arg->zero = 1;
		else
			break ;
		*arg->argument++ = *(*format)++;
	}
}
