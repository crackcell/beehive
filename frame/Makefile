# Author:  Tan Menglong <tanmenglong@gmail.com>
# Date:    Wed Jan  8 23:53:57 2014
#
# Make Target:
# ------------
# The Makefile provides the following targets to make:
#   $ make           compile and link
#   $ make clean     clean objects and the executable file
#
#===========================================================================

include ../Makefile.env

BUILD_TARGETS = beehive

INC = -I../include -I./

SRC = $(wildcard *.cc)
OBJ = $(patsubst %.cc, %.o, $(SRC))

.PHONY : all clean

all : $(BUILD_TARGETS)

$(BUILD_TARGETS) : $(OBJ)
	$(LINK) -o $@ $^ $(LIB)

clean:
	rm -rf $(OBJ) $(BUILD_TARGETS)
