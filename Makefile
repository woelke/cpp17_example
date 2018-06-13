.PHONY: clean

MAIN: main.cpp foo.cpp
	clang++-6.0 -std=c++17 -Wall -Wextra -o main main.cpp foo.cpp

clean:
	rm -f *.o
