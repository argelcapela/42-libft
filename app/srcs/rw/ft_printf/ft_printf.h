/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:14:00 by acapela-          #+#    #+#             */
/*   Updated: 2022/02/01 03:28:55 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*---------------------- libs----------------------------------------  */
// ↓ has va_(start, arg, copy, end) - variadic functions
# include <stdarg.h>
# include <unistd.h>
# include "../../libft.h"

/*---------------------- auxiliary vars -----------------------------  */

/* The Struct here is similar to an object in Object Orientation Paradignm,
why? Because it represents the object argument inside a printf format string,
so, each struct needs to represent some format, for example: %s, %03d, %c, etc.
The algorithm read any argument and fill itself with the maximum information as
possible, this datas are much useful after to make the bonus part.*/

// *argument 	-> Holds a copy of a format's substring,starting in % passing
//  though the flags, width,precision ending in the letter that indicates
//  the format type. ( holds "%[something]s" )*/
// type 		-> Holds the letter indicating the format type
// hash, minus, plus, space and zero are equal 1 if the flags (#,-,+,' ', or 0
//are inside the format, so, between %[flag here]type)
// width		-> Holds a number right after some flag or after the %.
// dot			-> Receive 1 if . is present in the format.
// precision	-> Holds a number right after the .(dot)
// negative		-> Receive 1 if the number inputted in negative.

typedef struct format_string_argument
{
	char	*argument;
	char	type;
	int		hash;
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		width;
	int		dot;
	int		precision;
	int		negative;
	int		has_visible_signal;
	char	visible_signal;
}	t_fs_arg;

/*---------------------translators-----------------------------------  */
// %%
char	*translate_percent(char *fmt);

// %c
char	*translate_to_char(t_fs_arg *arg, char *fmt, int value);

// %s
char	*translate_to_string(t_fs_arg *arg, char *fmt, char *value);

// %p
char	*translate_to_pointer(t_fs_arg *arg, char *fmt,
			unsigned long int value);

// %i
char	*translate_to_integer(t_fs_arg *arg, char *fmt, int value);

// %d
char	*translate_to_decimal(t_fs_arg *arg, char *fmt, int value);

// %u
char	*translate_to_unsigned_int(t_fs_arg *arg, char *fmt,
			unsigned int value);

// %x,%X
char	*translate_to_hexadecimal(t_fs_arg *arg, char *fmt, size_t value);

char	*remove_minus(char *string, t_fs_arg *arg);
char	*has_visible_signal(char *string, t_fs_arg *arg);

/*---------------------utils----------------------------------------  */
void	initialize_struct(t_fs_arg *arg);
void	destroy_struct(t_fs_arg *arg);

// Running format and filling struct with flags, width and precision;
char	*prepare_to_translation(const char *format, va_list *vl);
char	understanding_format(t_fs_arg *arg, const char *format, va_list *vl);
void	what_flags(t_fs_arg *arg, const char **format);
void	what_width(t_fs_arg *arg, const char **format, va_list *vl);
void	what_precision(t_fs_arg *arg, const char **format, va_list *vl);
char	*what_format_type(char type, char *fmt, t_fs_arg *arg, va_list *vl);

/*--------------------- start --------------------------------------  */
int		ft_printf(const char *format, ...);
char	*ft_printf_to_var(const char *format, ...);

#endif
