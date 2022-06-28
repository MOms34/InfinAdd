##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## MakeFile My.H
##

CC            =    gcc
AR            = ar
ARFLAGS     = rsc libmy.a *.o
CFLAGS         =    gcc *.c -c -I./include/

all: make_lib

make_lib:
	$(CC) *.c -c
	$(AR) $(ARFLAGS)
	cp my.h ../../include/my.h
	cp libmy.a ../libmy.a

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf *.out
	rm -rf *.c~
	rm -rf ../../include/*.h
	rm -rf ../*.a
