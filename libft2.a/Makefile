NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

CC = cc

HEADER = libft.h

SRC = ft_lstclear_bonus.c ft_putchar_fd.c ft_strmapi.c\
ft_atoi.c ft_lstdelone_bonus.c ft_putendl_fd.c ft_strncmp.c\
ft_bzero.c ft_lstiter_bonus.c ft_putnbr_fd.c ft_strnstr.c\
ft_calloc.c ft_lstlast_bonus.c ft_putstr_fd.c ft_strrchr.c\
ft_isalnum.c ft_lstmap_bonus.c ft_split.c ft_strtrim.c\
ft_isalpha.c ft_lstnew_bonus.c ft_strchr.c ft_substr.c\
ft_isascii.c ft_lstsize_bonus.c  ft_strdup.c ft_tolower.c\
ft_isdigit.c ft_memchr.c ft_striteri.c ft_toupper.c\
ft_isprint.c ft_memcmp.c ft_strjoin.c libft.h\
ft_itoa.c ft_memcpy.c ft_strlcat.c\
ft_lstadd_back_bonus.c  ft_memmove.c ft_strlcpy.c\
ft_lstadd_front_bonus.c ft_memset.c ft_strlen.c

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o:%.c $(HEADER)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean $(NAME)