SHELL=/bin/bash

.SUFFIXES:
.SUFFIXES: .c .o

CC=gcc
CFLAGS=-std=c99 -Wall

mol: mol.c
	$(CC) $(CFLAGS) mol.c -o mol -ledit
#	chmod 755 mol
