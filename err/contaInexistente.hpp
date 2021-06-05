#ifndef CONTA_INEXISTENTE_HPP
#define CONTA_INEXISTENTE_HPP

#include <exception>

class contaInexistente: public std::exception {
    /* Lançado quando o usuário insere um ID de usuário invalido. */
    public:
        virtual const char* what() const throw() {
            return "Nenhuma conta com o ID inserido encontrada.";
        }
};

#endif
