main: main.o editor.o
	g++ -o main main.o editor.o

tests: tests.o editor.o
	g++ -o tests tests.o editor.o

editor.o: editor.cpp editor.h

main.o: main.cpp editor.h

tests.o: tests.cpp doctest.h editor.h

clean:
	rm -f main.o editor.o tests.o main tests
