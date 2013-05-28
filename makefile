NAME   = Rogue.exe

LIBDIR = lib
HSRDIR = include
OBJDIR = src/obj
SRCDIR = src

OBJS   = $(OBJDIR)/main.o
FLAGS  = -Wall -Iinclude -Llib

Rogue: $(OBJS)
	g++ $(FLAGS) -o Rogue.exe $(OBJS) -lglfw -lopengl32

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp 
	g++ $(FLAGS) -c $(SRCDIR)/main.cpp -o $(OBJDIR)/main.o

clean:
	\rm ./$(OBJDIR)/*.o $(NAME)
