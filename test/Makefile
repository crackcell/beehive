# Author:  Tan Menglong <tanmenglong@gmail.com>
# Date:    Thu Jan  9 18:23:08 2014
#
# Make Target:
# ------------
# The Makefile provides the following targets to make:
#   $ make           compile and link
#   $ make clean     clean objects and the executable file
#
#===========================================================================

include ../Makefile.env

INC = -I../include -I../src
LIB = -lgtest

BUILD_TARGETS = beehive_env_test

.PHONY : all clean src check

all : $(BUILD_TARGETS)

clean :
rm -rf $(TEST_OBJ) $(BUILD_TARGETS)

%_SUITE : %_SUITE.o
$(LINK) -o $@ $^ $(OBJ) $(LIB)

#check : all
check : $(BUILD_TARGETS)
for file in $(wildcard *SUITE); \
do valgrind --leak-check=full ./$$file; \
done;
