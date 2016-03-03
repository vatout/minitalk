##
## Makefile for Makefile in /home/vatout_a/rendu/PSU_2015_minitalk
## 
## Made by Vatoutine
## Login   <vatout_a@epitech.net>
## 
## Started on  Fri Feb  5 12:08:24 2016 Vatoutine
## Last update Tue Feb  9 11:20:31 2016 Vatoutine
##

CC=		gcc

SRC=		main_serveur.c

SRC2=		main_client.c

NAME=		main_server

NAME2=		main_client

YOLO=		server

YOLO2=		client

CFLAGS=		-W -Wall -Wextra -pedantic

MV=		mv

RM=		rm -f

LIB=		-lmy -L./lib

OBJ=		$(SRC:.c=.o)

OBJ2=		$(SRC2:.c=.o)

$(NAME):	$(OBJ) $(NAME2)
	$(CC) $(OBJ) $(LIB) $(CFLAGS) -o $(NAME)
	$(MV) $(NAME) $(YOLO)
	$(MV) $(YOLO)/$(NAME) $(YOLO)/$(YOLO)

$(NAME2):	$(OBJ2)
	$(CC) $(OBJ2) $(LIB) $(CFLAGS) -o $(NAME2)
	$(MV) $(NAME2) $(YOLO2)
	$(MV) $(YOLO2)/$(NAME2) $(YOLO2)/$(YOLO2)

all:	$(NAME) $(NAME2)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ2)

fclean:	clean
	$(RM) $(YOLO)/$(YOLO)
	$(RM) $(YOLO2)/$(YOLO2)

re:	fclean all

.PHONY:	all clean fclean re
