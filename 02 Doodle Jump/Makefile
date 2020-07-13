all: compile link

test: compile link run

compile:
	g++ -c *.cpp
link:
	g++ *.o -o main_tetris -lsfml-graphics -lsfml-window -lsfml-system
clean:
	rm -f *.o *.exe
run:
	main_doodle