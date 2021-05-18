#include <stdio.h>
#include <exception>

#include "err/Error.hpp"
#include "banco/Banco.hpp"

int main() {
    int opt, id;
    Banco banco;

    do {
        printf("1. Listar clientes\n");
        printf("2. Listar contas\n");
        printf("3. Saldo do cliente\n");
        printf("4. Extrato do cliente\n");
        printf("5. Realizar transferencia bancaria\n");
        printf("6. Mostrar valor total de todas as contas\n");
        printf("0. Sair\n");
        printf("> ");
        scanf("%d", &opt);

        try {
            switch(opt) {
                case 1: banco.mostraClientes(); break;
                case 2: banco.mostraContas(); break;
                case 3: scanf("%d", &id); banco.mostraSaldo(id); break;
                case 4: break;
                case 5: break;
                case 6: break;
                case 0: printf("\nSaindo...\n"); break;
                default: throw entradaInvalida();
            }
        }

        catch (entradaInvalida &e) {
            printf("\nErro: %s\n\n", e.what());
        }

        catch (totalIncorreto &e) {
            printf("\nErro: %s\n\n", e.what());
            break;
        }

        catch (std::exception &e) {
            printf("\nErro indefinido identificado\n\n");
        }

    } while(opt != 0);

    return 0;
}
