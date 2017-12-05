
.PHONY:
	clean run

APP=poker_pal

CC=g++

LIB=src

build:	
	$(CC) main.cpp $(LIB)/*.cpp -I$(LIB) -o $(APP)
clean:
	rm $(APP)
run:
	./$(APP)

all:
	clean build
