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
        inline std::vector<Transferencia*> getTransferencias() const;
        inline void setID(int id);
        inline void setSaldo(int valor);
        inline void setTransferencia(int id_em, int id_des, int valor);
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

inline std::vector<Transferencia*> Conta::getTransferencias() const {
    return (this->transferencias);
}

inline void Conta::setID(int id) {
    this->id = id;
}

inline void Conta::setSaldo(int valor) {
    this->saldo = valor;
}

inline void Conta::setTransferencia(int id_em, int id_des, int valor) {
    Transferencia *aux = new Transferencia(id_em, id_des, valor);

    this->transferencias.push_back(aux);
}
#endif
