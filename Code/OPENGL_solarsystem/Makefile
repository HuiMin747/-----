CXX = g++
EXEC = solarsystem
SOURCES = main.cpp star.cpp solarsystem.cpp
OBJECTS = main.o star.o solarsystem.o

LDFLAGS = -lglut -lGL -lGLU


all :
	$(CXX) $(SOURCES) $(LDFLAGS) -o $(EXEC)

clean :
	rm -f $(EXEC) *.gdb *.o
