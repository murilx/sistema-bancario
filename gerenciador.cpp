#include <stdio.h>
#include <exception>

#include "err/Error.hpp"
#include "banco/Banco.hpp"

int main() {
    int opt;
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
                case 1: break;
                case 2: break;
                case 3: break;
                case 4: break;
                case 5: break;
                case 6: break;
                case 0: printf("Saindo\n"); break;
                default: throw entradaInvalida();
            }
        }

        catch (entradaInvalida &e) {
            printf("\nErro: %s\n\n", e.what());
        }

        catch (std::exception &e) {
            printf("\nErro indefinido identificado\n\n");
        }

    } while(opt != 0);

    return 0;
}
