

all: test

test: main.cpp base.h derived.h
	g++ main.cpp -o test
	./test
