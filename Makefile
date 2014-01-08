# Author:  Tan Menglong <tanmenglong@gmail.com>
# Date:    Wed Jan  8 23:53:02 2014
#
# Make Target:
# ------------
# The Makefile provides the following targets to make:
#   $ make           compile and link
#   $ make clean     clean objects and the executable file
#
#===========================================================================

include Makefile.env

.PHONY : all output clean help

all : output

output :
	mkdir -p output
	make -C frame

clean :
	rm -rf output
	make clean -C frame

help :
	@echo 'Usage: make [TARGET]'
	@echo 'TARGETS:'
	@echo '  all       (=make) compile and link.'
	@echo '  clean     clean objects and the executable file.'
	@echo '  help      print this message.'
	@echo
