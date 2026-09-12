# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: becanals <becanals@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/14 17:15:47 by becanals          #+#    #+#              #
#    Updated: 2026/09/12 14:33:24 by becanals         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = directory

BUILD_DIR = build
SRC_DIR = src
SRC_NAMES = main.cpp PhoneBook.cpp Contact.cpp

SRC = $(addprefix $(SRC_DIR)/, $(SRC_NAMES))
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -MMD -MP
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

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(BUILD_DIR)
	@echo -n "\n $(BLUE) ---> Building $<... --- $(END)"
	@$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@ 
	@echo "\n $(CIAN) DONE! :) $(END)"

$(NAME): $(OBJ) Makefile
	@echo -n "\n$(YELLOW)--->BUILDING $(NAME)...$(END)\n"
	@$(CC) $(CFLAGS) $(DFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)   === BUILDING COMPLETE : ) ===$(END)\n"

clean:
	@echo -n "$(RED) --> Deleting object files... $(END)"
	@rm -rf $(BUILD_DIR) 
	@echo "$(GREEN) DONE! $(END)"

fclean: clean
	@echo -n "$(RED) --> Deleting executables... $(END)"
	@rm -rf $(NAME) 
	@echo "$(GREEN) DONE! $(END)"

-include $(OBJ:.o=.d)

re: fclean all

.PHONY: all clean fclean re
