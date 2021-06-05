#ifndef OPCAO_INVALIDA_HPP
#define OPCAO_INVALIDA_HPP

#include <exception>

class opcaoInvalida : public std::exception {
    /* Lançado quando uma opção invalida é inserida no menu principal do
       programa */
    public:
        virtual const char* what() const throw() {
            return "Opcao invalida inserida.";
        }
};

#endif
