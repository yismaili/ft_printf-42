NAME = libftprintf.a
cc = gcc
flags = -Wall -Wextra -Werror
srcs = ft_printf.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putpntr.c \
	   ft_putdcml.c \
	   ft_puthdmlup.c \
	   ft_puthdmllow.c \
	   ft_putstr.c

objs = $(srcs:.c=.o)

all : $(NAME)

$(NAME): $(objs)
	ar rc $(NAME) $(objs)

%.o: %.c ft_printf.h
	$(cc) $(flags) -c $<  -o $@

clean :
	rm -rf $(objs)

fclean :	clean
	rm -rf	$(NAME)

re:	fclean all


.PHONY: all clean fclean re
