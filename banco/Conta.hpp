#ifndef CONTA_HPP
#define CONTA_HPP

#include <vector>

class Conta {
    private:
        Cliente *cliente;
        int saldo;
        int id;

    public:
        // Construtor vazio
        Conta() { }

        // Construtor com parâmetros
        Conta(Cliente *cliente, int saldo) {
            this->cliente = cliente;
            this->saldo = saldo;
        }

        // Construtor cópia
        Conta(Conta* outro) {
            this->cliente = outro->cliente;
            this->saldo = outro->saldo;
        }

        // Getters e Setters
        inline int getSaldo() const;
        inline int getID() const;
        inline Cliente* getCliente() const;
        inline void setID(int id);
        inline void setSaldo(int valor);
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

inline void Conta::setSaldo(int valor) {
    this->saldo = valor;
}
#endif
