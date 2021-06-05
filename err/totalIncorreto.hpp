#ifndef TOTAL_INCORRETO_HPP
#define TOTAL_INCORRETO_HPP

#include <exception>

class totalIncorreto : public std::exception {
    /* Lançado quando o balanço geral do banco não corresponde com a soma do
       saldo de todas as contas. */
    public:
        virtual const char* what() const throw() {
            return "Balanco geral do bando incorreto. Abortando...";
        }
};

#endif
