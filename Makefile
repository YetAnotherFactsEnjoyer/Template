##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Compiles C files
##

DIR_LIB		=	lib/

LIB_FILES	=	compare.c	\
			convert.c    \
			copy.c	\
			cut.c	\
			duplicate.c	\
			len.c	\
			read_file.c	\
			write.c	\

DIR_SRC		=	src/

SRC_FILES	=	main.c	\
				template.c	\
				$(addprefix $(DIR_LIB), $(LIB_FILES))

SRC			=	$(addprefix $(DIR_SRC), $(SRC_FILES))

OBJ			=	$(SRC:.c=.o)

DIR_TEST = tests/

TEST_FILES	=	lib_test.c	\

TOBJ	=	src/template.c	\
		$(addprefix $(DIR_TEST), $(TEST_FILES))	\
		$(addprefix $(DIR_SRC), $(addprefix $(DIR_LIB), $(LIB_FILES)))

CFLAGS		=	-g3 -I./include

BINARY		=	template

all: 	compile clean
		@echo "Makefile -> all"

compile:	$(OBJ)
		@gcc $(OBJ) -o $(BINARY) $(CFLAGS)
		@echo "Makefile -> compile"

clean:
		@rm -f $(OBJ)
		@rm -rf .ropeproject
		@echo "Makefile -> clean"

fclean: clean
		@rm -rf $(BINARY)
		@rm -rf unit_tests
		@rm -rf *.log
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@rm -f vgcore.*
		@echo "Makefile -> fclean"

re:		fclean all
		@rm -f $(OBJ)
		@rm -rf .ropeproject
		@echo "Makefile -> re"

unit_tests : re
	gcc -o unit_tests $(TOBJ) $(CFLAGS) --coverage -lcriterion

test_run :	unit_tests
	./unit_tests
	gcovr --exclude ./unit_tests

.PHONY: all clean fclean re compile
