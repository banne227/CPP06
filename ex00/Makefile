############################################################
#                                                          #
#   ██████╗ ██████╗ ███╗   ██╗                             #
#   ██╔══██╗╚════██╗████╗  ██║                             #
#   ██████╔╝ █████╔╝██╔██╗ ██║                             #
#   ██╔══██╗██╔═══╝ ██║╚██╗██║                             #
#   ██████╔╝███████╗██║ ╚████║                             #
#   ╚═════╝ ╚══════╝╚═╝  ╚═══╝                             #
#                                                          #
#   File    : Makefile                                     #
#   Created : 2026-01-20 16:32                             #
#   Updated : 2026-01-20 16:32                             #
#                                                          #
############################################################

# Variables
NAME			= convert
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf

# Directories
INCLUDES_DIR	= includes/
SRCS_DIR		= srcs/
OBJ_DIR			= obj/

# Files
SRCS			= main.cpp \
				  $(SRCS_DIR)ScalarConverter.cpp \
				  $(SRCS_DIR)Display.cpp

OBJS			= $(SRCS:%.cpp=$(OBJ_DIR)%.o)

# Targets
all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -I$(INCLUDES_DIR) -o $@ $^

$(OBJ_DIR)%.o:	%.cpp
				mkdir -p $(dir $@)
				$(CXX) $(CXXFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
				$(RM) $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re