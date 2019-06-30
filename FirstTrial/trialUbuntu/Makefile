
CC = g++

SRC = helloWorld.cpp
OBJ = helloWorld.o

tareg = hw

$(tareg) : $(OBJ)
	$(CC) -o $(tareg) $(OBJ)

.cpp.o :
	$(CC) -c -o $@ $<

clean:
	- rm $(OBJ) $(tareg)
