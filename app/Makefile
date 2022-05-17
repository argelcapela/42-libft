.PHONY: all clean fclean re

CC =            clang
HEADERS_DIR =   ./srcs
CFLAGS =		-I$(HEADERS_DIR) -Wall -Wextra -Werror
#-ggdb3
AR =            ar -rcs
RM =            rm -rfd

SRCS_DIR =   	srcs
OBJS_DIR =   	$(SRCS_DIR)/.objs
HEADER =		$(HEADERS_DIR)/libft.h
NAME =			libft.a

SRCS_FILES+=    arr/ft_arr_free.c

SRCS_FILES= 	chr/ft_isalnum.c \
				chr/ft_isascii.c \
				chr/ft_isdigit.c \
				chr/ft_isalpha.c \
				chr/ft_isprint.c \
				chr/ft_tolower.c \
				chr/ft_toupper.c\

SRCS_FILES+=	cvt/ft_atoi.c \
				cvt/ft_itoa.c \
				cvt/ft_chr_to_str.c \
				cvt/ft_uitoa_base.c\
				cvt/ft_hexatoi.c \

SRCS_FILES+=	dll/ft_dll_is_sorted.c \
				dll/ft_dll_last.c \
				dll/ft_dll_size.c \
				dll/ft_dll_free.c \
				dll/ft_dll_printv.c \
				dll/ft_dll_biggest.c \
				dll/ft_dll_prev_index.c

SRCS_FILES+=	lst/ft_lstadd_front.c \
				lst/ft_lstadd_back.c \
				lst/ft_lstdelone.c \
				lst/ft_lstsize.c \
				lst/ft_lstlast.c \
				lst/ft_lstiter.c \
				lst/ft_lstmap.c \
				lst/ft_lstnew.c \
				lst/ft_lstclear.c

SRCS_FILES+=	mtx/ft_mtx_free.c \
				mtx/ft_mtx_set.c \
				mtx/ft_mtx_replace_all.c \
				mtx/ft_mtx_size.c

SRCS_FILES+=	mem/ft_bzero.c \
				mem/ft_memchr.c \
				mem/ft_memcmp.c \
				mem/ft_memcpy.c \
				mem/ft_memmove.c \
				mem/ft_memset.c \
				mem/ft_calloc.c \
				mem/ft_free_ptr.c

SRCS_FILES+=	rw/ft_putstr_fd.c \
				rw/ft_putchar_fd.c \
				rw/ft_putendl_fd.c \
				rw/ft_putnbr_fd.c \
				rw/get_next_line.c \
				rw/ft_print_matrix.c \
				rw/ft_printf/ft_printf.c \
				rw/ft_printf/ft_printf_to_var.c \
				rw/ft_printf/vendor/base/initialize_struct.c         \
				rw/ft_printf/vendor/base/destroy_struct.c         \
				rw/ft_printf/vendor/base/has_visible_signal.c         \
				rw/ft_printf/vendor/base/remove_minus.c         \
				rw/ft_printf/vendor/base/prepare_to_translation.c         \
				rw/ft_printf/vendor/base/understanding_format.c         \
				rw/ft_printf/vendor/base/what_flags.c         \
				rw/ft_printf/vendor/base/what_format_type.c         \
				rw/ft_printf/vendor/base/what_precision.c         \
				rw/ft_printf/vendor/base/what_width.c         \
				rw/ft_printf/vendor/translators/translate_percent.c \
				rw/ft_printf/vendor/translators/translate_to_char.c  \
				rw/ft_printf/vendor/translators/translate_to_decimal.c  \
				rw/ft_printf/vendor/translators/translate_to_integer.c  \
				rw/ft_printf/vendor/translators/translate_to_string.c  \
				rw/ft_printf/vendor/translators/translate_to_unsigned_int.c  \
				rw/ft_printf/vendor/translators/translate_to_pointer.c  \
				rw/ft_printf/vendor/translators/translate_to_hexadecimal.c

SRCS_FILES+=	str/ft_split.c \
				str/ft_strchr.c \
				str/ft_strdup.c \
				str/ft_striteri.c \
				str/ft_strjoin.c \
				str/ft_strlcat.c \
				str/ft_strlcpy.c \
				str/ft_strlen.c \
				str/ft_strmapi.c \
				str/ft_strncmp.c \
				str/ft_strnstr.c \
				str/ft_strrchr.c \
				str/ft_strtrim.c \
				str/ft_substr.c \
				str/ft_str_merge.c \
				str/ft_str_replace.c \
				str/ft_strjoin_free.c \
				str/ft_str_replace_all.c \
				str/ft_first_ocurrence.c \
				str/ft_last_ocurrence.c

SRCS = 			$(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
OBJS =          $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)
$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS_DIR) $(OBJS)
	$(AR) $(NAME) $(OBJS) $(HEADER)
	@echo "\033[1;32mMANDATORY COMPILED SUCCESFULY!\033[0m"

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)/arr
	mkdir -p $(OBJS_DIR)/chr
	mkdir -p $(OBJS_DIR)/cvt
	mkdir -p $(OBJS_DIR)/dll
	mkdir -p $(OBJS_DIR)/lst
	mkdir -p $(OBJS_DIR)/mtx
	mkdir -p $(OBJS_DIR)/mem
	mkdir -p $(OBJS_DIR)/rw
	mkdir -p $(OBJS_DIR)/str
	mkdir -p $(OBJS_DIR)/rw/ft_printf
	mkdir -p $(OBJS_DIR)/rw/ft_printf/vendor
	mkdir -p $(OBJS_DIR)/rw/ft_printf/vendor/base
	mkdir -p $(OBJS_DIR)/rw/ft_printf/vendor/translators

clean:
	$(RM) $(OBJS_DIR)
	@echo "\033[1;32mCLEAN EXECUTED SUCCESFULY!\033[0m"

fclean:	clean
	find -name '$(NAME)' -delete
	@echo "\033[1;32mFCLEAN EXECUTED SUCCESFULY!\033[0m"

re:
	@make fclean && make all
	@echo "\033[1;32mRE EXECUTED SUCCESFULY!\033[0m"

bonus: all
