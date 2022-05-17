/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 20:34:46 by acapela-          #+#    #+#             */
/*   Updated: 2022/05/16 22:15:17 by acapela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* readline */
# include			<stdio.h>
# include			<readline/readline.h>
# include			<readline/history.h>

/* write, read */
# include <unistd.h>

/* malloc, free */
# include <stdlib.h>

/* open */
# include <fcntl.h>

/* pow */
# include <math.h>

/* ft_printf resources */
# include "rw/ft_printf/ft_printf.h"

// arr (array)
void	ft_arr_free(void **array);

// chr (char)
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
char	ft_toupper(int c);

// cvt (convert)
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_chr_to_str(int c, size_t qtd);
char	*ft_uitoa_base(size_t n, char *base);
size_t	ft_atos(const char *str);
int		*ft_hexatoi(char *hexa);

// dll (double linked list)
typedef struct s_dll
{
	struct s_dll		*previous;
	struct s_dll		*next;
	int					index;
	int					value;
	char				*op_name;
}	t_dll;

int		ft_dll_size(t_dll *stack);
int		ft_dll_is_sorted(t_dll *stack);
t_dll	*ft_dll_last(t_dll *stack);
void	ft_dll_free(t_dll *stack);
void	ft_dll_printv(t_dll *stack, char *title);
int		ft_dll_biggest(t_dll *stack);
int		ft_dll_prev_index(t_dll *a, t_dll *a_iterator);

// lst (list)
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

// mtx (matrix)
void	ft_mtx_free(void **matrix);
char	**ft_mtx_replace_all(char **matrix, char *search, char *replace);
void	ft_mtx_set(int **matrix, int width, int height, int ch);
int 	ft_mtx_size(void **matrix);

// mem (memory)
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_free_ptr(void **ptr);

// rw (read and write)
# define FD 1

# define TOKENIZATION_NULL    "___BANANA0_"

# define TOKENIZATION_PERCENT "___BANANA1_"

char	*get_next_line(int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);

// str (string)
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(char const *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_str_merge(char *s1, char *s2);
char	*ft_str_replace(char *str, char *search, char *replace);
char	*ft_str_replace_all(char *str, char *search, char *replace);
int		ft_first_ocurrence(const char *str, int ch);
int		ft_last_ocurrence(const char *str, int ch);
char	**ft_split(char *s, char c);
int		ft_indexof(const char *str, int ch);

#endif
