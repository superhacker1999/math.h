TEST = all_tests
LIB = s21_math.a

HEADER = s21_string.h 

OBJ = $(patsubst %.c, %.o, $(SRC))
OBJ_TEST = $(patsubst %.c, %.o, $(SRC_TEST))
COVER_GCNO = $(patsubst %.o, %.gcno, $(OBJ) $(OBJ_TEST))
COVER_GCDA = $(patsubst %.o, %.gcda, $(OBJ) $(OBJ_TEST))
CC = gcc
SRC =	s21_abs.c s21_ceil.c s21_cos.c s21_fabs.c s21_floor.c \
		s21_fmod.c s21_pow.c s21_sin.c s21_exp.c s21_log.c \
		s21_tan.c s21_sqrt.c s21_asin.c s21_acos.c s21_atan.c
	
SRC_TEST = s21_math_test.c
CFLAGS := -Wall -Werror -Wextra -I. -std=c11
LDFLAGS = -lcheck
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S), Linux)
	LDFLAGS += -lsubunit -lm -lpthread -lrt
endif

.PHONY: all, clean, test, s21_math.a, gcov_report

all: clean s21_math.a test

s21_math.a: $(OBJ)
	ar rcs $(LIB) $?
	ranlib $(LIB)

%.o: %.c $(HEADER)
	$(CC) $(СFLAGS) -c $< -o $@ $(LDFLAGS)

test: $(TEST)

$(TEST): clean 
	$(CC) $(CFLAGS) $(SRC_TEST) $(SRC) -o $@ $(LDFLAGS) --coverage
	@echo "---------------------------TESTS--------------------------------------"
	@./$(TEST)
	@echo "----------------------------------------------------------------------"

gcov_report: $(LIB) test 
	lcov -t "$(TEST)" -o $(TEST).info -c -d .	
	genhtml -o report $(TEST).info 

clean:
	@rm -rf $(OBJ) $(COVER_GCNO) $(OBJ_TEST) $(COVER_GCDA)  *.info
	@rm -rf $(TEST) report

clean_lib:
	@rm -rf $(LIB)

style_check:
	cppcheck --enable=all --suppress=missingIncludeSystem .
	cp ../materials/linters/CPPLINT.cfg .
	python3 ../materials/linters/cpplint.py --extensions=c *.c *.h
	rm -rf CPPLINT.cfg

valgrind_check:
	@$(CC) $(SRC_TEST) $(LIB) -o $(TEST) $(LDFLAGS)
	CK_FORK=no valgrind --leak-check=full ./$(TEST)
	make clean 

