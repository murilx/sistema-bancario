#ifndef TRANSFERENCIA_HPP
#define TRANSFERENCIA_HPP

#include "Conta.hpp"

class Transferencia {
    private:
        Conta* origem;
        Conta* destino;
        int v_enviado;

    public:
        // Construtor com parâmetros
        Transferencia(Conta* origem, Conta* destino, int valor) {
            this->origem = origem;
            this->destino = destino;
            this->v_enviado = valor;
        }

        // Getters e setters
        inline Conta* getOrigem() const;
        inline Conta* getDestino() const;
        inline int getValor() const;
};

inline Conta* Transferencia::getOrigem() const {
    return (this->origem);
}

inline Conta* Transferencia::getDestino() const {
    return (this->destino);
}

inline int Transferencia::getValor() const {
    return (this->v_enviado);
}

#endif
