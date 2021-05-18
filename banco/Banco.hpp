#ifndef BANCO_HPP
#define BANCO_HPP

#include <vector>

#include "../err/Error.hpp"
#include "Cliente.hpp"
#include "Conta.hpp"

class Banco {
    private:
        int total;
        std::vector<Cliente*> clientes;
        std::vector<Conta*> contas;

    public:
        // Construtor
        Banco() {
            // Criação de clientes
            clientes.push_back(new Cliente(std::string("Carlos Silva")));
            clientes.push_back(new Cliente(std::string("Maria de Souza")));
            clientes.push_back(new Cliente(std::string("Ruan Perez")));

            // Criação de contas
            // Valores em centavos
            contas.push_back(new Conta(clientes.at(0), 100000));
            contas.push_back(new Conta(clientes.at(1), 100000));
            contas.push_back(new Conta(clientes.at(2), 100000));
            contas.push_back(new Conta(clientes.at(1), 50000));

            // Determinando o balanço geral / Total de dinheiro no banco
            // E determinando o número/ID de cada conta
            total = 0;
            for(int i = 0; i < (int)contas.size(); i++) {
                contas.at(i)->setID(i + 1);
                total += contas.at(i)->getSaldo();
            }
        }

        // Destrutor
        virtual ~Banco() {
            // Desaloca todos as classes dentro dos vectors antes de se destruir

            while(!clientes.empty()) {
                delete clientes.back();
                clientes.pop_back();
            }

            while(!contas.empty()) {
                delete contas.back();
                contas.pop_back();
            }
        }

        // Métodos
        void testaTotal() throw (totalIncorreto);

        void mostraClientes();
        void mostraContas();
        void mostraSaldo(int id) throw (entradaInvalida);
        void mostraExtrato(int id) throw (entradaInvalida);
        void mostraTotal();

        // Getters e setters
        inline int getTotal() const;
};

inline int Banco::getTotal() const {
    return (this->total);
}

#endif
