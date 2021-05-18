#include <stdio.h>
#include "Banco.hpp"

void Banco::testaTotal() throw (totalIncorreto) {
    int total_teste = 0;

    for(int i = 0; i < (int)this->contas.size(); i++) {
        total_teste += this->contas.at(i)->getSaldo();
    }

    if(this->getTotal() != total_teste) throw totalIncorreto();
}

void Banco::mostraClientes() {
    printf("\nClientes: \n");

    for(int i = 0; i < (int)this->clientes.size(); i++) {
        printf("%02d. %s\n", i + 1,
            this->clientes.at(i)->getNome().c_str());
    }

    printf("\n");
}

void Banco::mostraContas() {
    printf("\nContas: \n");

    for(int i = 0; i < (int)this->contas.size(); i++) {
        printf("Conta ID: %05d \nDono da conta: %s\n\n",
            this->contas.at(i)->getID(),
            this->contas.at(i)->getCliente()->getNome().c_str());
    }

    printf("\n");
}

void Banco::mostraSaldo(int id) throw (entradaInvalida) {
    Conta *aux;
    int found;

    // Verifica se a conta enviada é uma conta que existe
    // no banco
    for(int i = 0; i < (int)this->contas.size(); i++) {
        if(id == this->contas.at(i)->getID()) {
            aux = this->contas.at(i);
            found = 1;
            break;
        } else found = 0;
    }

    // Envia um erro de entrada invalida caso o ID inserido
    // não corresponda com nenhum ID das contas
    if(!found) throw entradaInvalida();

    // Mostra o saldo da conta
    printf("\nConta ID: %05d \nSaldo: %lf\n\n",
        aux->getID(),
        aux->getSaldo()/(double)100);
}
