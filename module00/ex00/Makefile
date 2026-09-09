# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: becanals <becanals@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/14 17:15:47 by becanals          #+#    #+#              #
#    Updated: 2026/09/08 21:23:06 by becanals         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

BUILD_DIR = build

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

END = \033[m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
PURPLE = \033[35m
CIAN = \033[36m
MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME): $(OBJ)
	@echo -n "\n$(YELLOW)--->BUILDING $(NAME)...$(END)\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)   === BUILDING COMPLETE : ) ===$(END)\n"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(HDER) Makefile | $(BUILD_DIR)
	@$(CC) $(CFLAGS)  -c $< -o $@
	@echo -n "\n $(BLUE) ---> Building $<... --- $(END)"
	@echo " $(CIAN) DONE! :) $(END)"

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

clean:
	@echo -n "$(RED) --> Deleting object files... $(END)"
	@rm -rf $(BUILD_DIR)
	@echo "$(GREEN) DONE! $(END)"

fclean: clean
	@echo -n "$(RED) --> Deleting executables... $(END)"
	@rm -rf $(NAME) 
	@echo "$(GREEN) DONE! $(END)"

re: fclean all

.PHONY: all clean fclean bonus re
