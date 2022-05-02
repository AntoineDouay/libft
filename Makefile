NAME= libft.a

FLAGS= -Wall -Wextra -Werror

SRC= $(wildcard *.c)

OBJ= $(SRC:.c=.o)

RM= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^
$(OBJ): $(SRC)
	gcc $(FLAGS) -o $@ -c $<  
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all 
