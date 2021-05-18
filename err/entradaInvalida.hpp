#ifndef ENTRADA_INVALIDA_HPP
#define ENTRADA_INVALIDA_HPP

#include <exception>

class entradaInvalida : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Entrada invalida.";
        }
};

#endif
