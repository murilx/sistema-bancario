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
            contas.push_back(new Conta(clientes.at(0), 1000));
            contas.push_back(new Conta(clientes.at(1), 1000));
            contas.push_back(new Conta(clientes.at(2), 1000));

            // Determinando o balanço geral / Total de dinheiro no banco
            for(int i = 0; i < (int)contas.size(); i++) {
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
        void mostraClientes();
        void mostraContas();
        void mostraSaldo(int id) throw (parametroInvalido);
        void mostraExtrato(int id) throw (parametroInvalido);
        void mostraTotal();
};

#endif
