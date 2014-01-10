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

INC = -I../include -I../frame
LIB = -lgtest

BUILD_TARGETS = beehive_env_test

.PHONY : all clean src check

all : $(BUILD_TARGETS)

clean :
	rm -rf *.o *_test

beehive_env_test :
	$(CXX) ../frame/beehive_env.o beehive_env_test.cc -o $@ $(LIB) $(INC)
