CC = g++
OBJ = prog1.o

prog: $(OBJ)
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) -c $<

clean: 
	rm *.o prog
