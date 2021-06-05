#ifndef SALDO_INSUFICIENTE_HPP
#define SALDO_INSUFICIENTE_HPP

#include <exception>

class saldoInsuficiente : public std::exception {
    /* Lançado quando o usuário tenta fazer uma transferência com saldo
       insufienciente, ou seja, quando o usuário insere um valor para ser
       transferido maior que o valor que há na conta. */
    public:
        virtual const char* what() const throw() {
            return "Saldo insuficiente na conta.";
        }
};

#endif
