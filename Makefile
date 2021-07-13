ADDNBOPATH = add_nbo/
ADDNBOFILES = add_nbo.c
ADDNBO = $(addprefix $(ADDNBOPATH), $(ADDNBOFILES))

SRCPATH = ./src/
SRCFILES = add-nbo.c $(ADDNBO)
SRCS = $(addprefix $(SRCPATH), $(SRCFILES))

OBJECTS = $(SRCS:.c=.o)

INC = -I ./include/

CC = gcc
CFLAGS = -Wall -Wextra $(INC)

NAME = add-nbo
RM = rm -rf

.c .o :
		$(CC) $(CFLAGS) -C
all : $(NAME)

$(NAME) : $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@make clean


clean :
		$(RM) $(OBJECTS) core

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : re fclean celan all