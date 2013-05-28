﻿NAME   = Rogue.exe

LIBDIR = lib
HDIR   = include
OBJDIR = src/obj
SRCDIR = src

OBJS   = $(OBJDIR)/main.o
FLAGS  = -Wall -I$(HDIR) -L$(LIBDIR)

Rogue: $(OBJS)
	g++ $(FLAGS) -o Rogue.exe $(OBJS) #-lglfw -lopengl34

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp 
	#../include/GL/glfw.h ../include/base.h
	g++ $(FLAGS) -c $(SRCDIR)/main.cpp -o $(OBJDIR)/main.o

clean:
	\rm ./$(OBJDIR)/*.o $(NAME)