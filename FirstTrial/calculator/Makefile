
CC = g++

SRC = main.cpp
OBJ = main.o

tareg = calc


$(tareg) : $(OBJ)
	$(CC) -o $(tareg) $(OBJ)

.cpp.o :
	$(CC) -c -o $@ $<

clean:
	- rm $(OBJ) $(tareg)
