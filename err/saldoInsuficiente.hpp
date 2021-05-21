#ifndef SALDO_INSUFICIENTE_HPP
#define SALDO_INSUFICIENTE_HPP

#include <exception>

class saldoInsuficiente : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Saldo insuficiente na conta.";
        }
};

#endif
