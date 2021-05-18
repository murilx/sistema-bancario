FLAGS = -Wall -std=c++98 -I.
HEADERS = banco/Banco.cpp

gerenciador: gerenciador.cpp
	g++ -o gerenciador gerenciador.cpp $(FLAGS) $(HEADERS)
