##
## Makefile for  in /home/arnould_b/Igraph
## 
## Made by jean-michel arnould
## Login   <arnould_b@epitech.net>
## 
## Started on  Mon Dec 21 09:21:05 2015 jean-michel arnould
## Last update Sun Feb 28 16:20:34 2016 Arnould Jean-Michel
##

NAME		:=	solver

CC		:=	@gcc
RM		:= 	@rm -f

SRC_DIR		:= 	src
OBJ_DIR		:=	obj
INC_DIR		:=	inc

CFLAGS		:=	-Wextra -Wall -Werror -g
#CFLAGS		:=	-g

CFLAGS		+=	-I$(INC_DIR)

SRC		:=	main.c\
			my_split.c\
			my_display.c\
			errors.c\
			solver.c\
			tools.c

SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ		:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))


$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c
			@echo "génération de l'objet $@ à partir de la source $<"
			@$(CC) $(CFLAGS) -c -o $@ $<

all:			$(NAME)


$(NAME): 		$(OBJ)
			@echo "Compilation et génération du fichier $(NAME)"
			$(CC) -o $(NAME) $(OBJ)

clean:
			@echo "Suppression des objets suivants: $(OBJ)"
			@echo "Suppression des fichiers temporaires dans $(SRC_DIR), $(OBJ_DIR) et $(INC_DIR)"
			$(RM) $(OBJ)
			$(RM) $(SRC_DIR)/*~
			$(RM) $(OBJ_DIR)/*~
			$(RM) $(INC_DIR)/*~
			$(RM) *~
			$(RM) $(SRC_DIR)/*\#
			$(RM) $(OBJ_DIR)/*\#
			$(RM) $(INC_DIR)/*\#
			$(RM) *\#

fclean: 		clean
			@echo "Suppression du fichier $(NAME)"
			$(RM) $(NAME)

re:			fclean all

.PHONY: 		all clean fclean re
