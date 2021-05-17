FLAGS = -Wall -std=c++98 -I.

gerenciador: gerenciador.cpp
	g++ -o gerenciador gerenciador.cpp $(FLAGS)
