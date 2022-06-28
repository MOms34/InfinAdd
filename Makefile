##
## EPITECH PROJECT, 2021
## InfinAdd
## File description:
## Makefile
##

CC			= 	gcc
CFLAGS		= 	-c -I./include/

SRC 		=	my_long_str.c \

OBJ 		= 	my_long_str.o \

TARGET		= 	infin_add \

CFLAGS	=	-I./include -W -Wextra -Wall -Werror

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C ./lib/my
	$(CC) -o $(TARGET) $(OBJ) -L./lib/ -lmy

clean:
	rm -rf $(OBJ)
	make clean -C ./lib/my

fclean:clean
	rm -rf $(TARGET)

re:fclean all
