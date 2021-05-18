#ifndef CONTA_HPP
#define CONTA_HPP

#include <vector>
#include "Transferencia.hpp"

class Conta {
    private:
        Cliente *cliente;
        int saldo;
        int id;

        std::vector<Transferencia*> transferencias;

    public:
        // Construtor vazio
        Conta() { }

        // Construtor com parâmetros
        Conta(Cliente *cliente, int saldo) {
            this->cliente = cliente;
            this->saldo = saldo;
        }

        // Construtor cópia
        Conta(Conta& outro) {
            this->cliente = outro.cliente;
            this->saldo = outro.saldo;
        }

        // Destrutor
        virtual ~Conta() {
            // Desaloca todos as classes dentro dos vectors antes de se destruir

            while(!transferencias.empty()) {
                delete transferencias.back();
                transferencias.pop_back();
            }
        }

        // Getters e Setters
        inline int getSaldo() const;
        inline int getID() const;
        inline Cliente* getCliente() const;
        inline void setID(int id);
};

// Getters e Setters
inline int Conta::getSaldo() const {
    return (this->saldo);
}

inline int Conta::getID() const {
    return (this->id);
}

inline Cliente* Conta::getCliente() const {
    return (this->cliente);
}

inline void Conta::setID(int id) {
    this->id = id;
}

#endif
