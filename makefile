CC = g++
CFLAGS = -std=c++0x -g -Wall
OBJ = Ants.o Insect.o Bees.o Colony.o main.o
DEST = AntsVsSomeBees

$(DEST): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(DEST)

Ants.o: Ants.cpp
	$(CC) $(CFLAGS) -c Ants.cpp

Insect.o: Insect.cpp
	$(CC) $(CFLAGS) -c Insect.cpp

Bees.o: Bees.cpp
	$(CC) $(CFLAGS) -c Bees.cpp

Colony.o: Colony.cpp
	$(CC) $(CFLAGS) -c Colony.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm $(OBJ) $(DEST)
 