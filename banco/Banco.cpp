#include <stdio.h>
#include "Banco.hpp"

void Banco::mostraClientes() {
    printf("\nClientes: \n");

    for(int i = 0; i < (int)this->clientes.size(); i++) {
        printf("[%d] - %s\n", i,
            this->clientes.at(i)->getNome().c_str());
    }

    printf("\n");
}

void Banco::mostraContas() {
    printf("\nContas: \n");

    for(int i = 0; i < (int)this->contas.size(); i++) {
        printf("[%d] - ID: %05d | Saldo: %05d | Dono da conta: %s\n", i,
            this->contas.at(i)->getID(), 
            this->contas.at(i)->getSaldo()/100,
            this->contas.at(i)->getCliente()->getNome().c_str());
    }

    printf("\n");
}
