##
## EPITECH PROJECT, 2021
## lib-csfml
## File description:
## Makefile
##

BOLD=$'\x1b[1m
UNDER=$'\x1b[4m
RED=$'\x1b[31m
PURPLE=$'\x1b[35m'
GREEN=$'\x1b[32m
YELLOW = \x1b[33;01m
WHITE = \x1b[00;00m
CYAN = \x1b[34;01m
DEFAULT=$'\e[39m\e[0m

NAME=liboli.a

CC = gcc

SRC = 	src/destroy_sprite.c	\
		src/display_sprite.c	\
		src/hover_sprite.c		\
		src/init_sprite.c 		\
		src/move_sprite.c		\
		src/play_sound.c

AUTHORS = RedGinor | Waz0x

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\n$(GREEN)[Compiling]$(WHITE) %s$(DEFAULT)" $@

all: $(NAME)

$(NAME): $(OBJ)
		scp ../includes/oli.h ../../includes
		@ar -rc $(NAME) $(OBJ)
		scp $(NAME) ../
		@printf "\n\n$(CYAN)Done, don't forget to compile wtih $(GREEN)$(BOLD)$(UNDER)-loli$(WHITE)\n$(DEFAULT)"
		@make print_info

clean:
		@printf "\n$(RED)[cleaning...]$(WHITE)\n$(DEFAULT)"
		rm -f $(OBJ)
		@printf "$(GREEN)done$(WHITE)\n$(DEFAULT)"

fclean: clean
		rm -f $(NAME)
		rm -f ../$(NAME)
		rm -f ../../includes/oli.h
		@printf "$(GREEN)done$(WHITE)\n\n$(DEFAULT)"

print_info:
	@echo -e "\n"
	@echo -e "$(PURPLE) ▄▄▄▄▄▄▄▄▄▄▄▄▄   ▄▄             ▄▄▄▄▄▄▄▄▄▄▄▄"
	@echo -e "$(PURPLE)█░░░░░░░░░░░░░█ █░░█           █░░░░░░░░░░░░█"
	@echo -e "$(PURPLE)█░░█▀▀▀▀▀▀▀█░░█ █░░█            ▀▀▀▀█░░█▀▀▀▀"
	@echo -e "$(PURPLE)█░░█       █░░█ █░░█                █░░█"
	@echo -e "$(PURPLE)█░░█       █░░█ █░░█                █░░█"
	@echo -e "$(PURPLE)█░░█       █░░█ █░░█                █░░█"
	@echo -e "$(PURPLE)█░░█       █░░█ █░░█                █░░█"
	@echo -e "$(PURPLE)█░░█       █░░█ █░░█                █░░█"
	@echo -e "$(PURPLE)█░░█▄▄▄▄▄▄▄█░░█ █░░█▄▄▄▄▄▄▄▄▄   ▄▄▄▄█░░█▄▄▄▄"
	@echo -e "$(PURPLE)█░░░░░░░░░░░░░█ █░░░░░░░░░░░░█ █░░░░░░░░░░░░█"
	@echo -e "$(PURPLE) ▀▀▀▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀▀"
	@echo -e "$(BOLD)$(CYAN)CSFML utils library made by $(AUTHORS)$(DEFAULT)\n\n"