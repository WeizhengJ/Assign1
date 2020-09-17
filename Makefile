matrix.exe: matrix.cc matrix.h
	g++ -std=c++11 -Wall -Wextra -pedantic -o matrix.exe matrix.cc

clean:
	rm *.exe
