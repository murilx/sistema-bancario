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
        printf("3. Saldo da conta\n");
        printf("4. Extrato da conta\n");
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
                case 4: scanf("%d", &id); banco.mostraExtrato(id); break;
                case 5:
                    int id_em, id_des, valor;
                    printf("ID da conta de origem: ");
                    scanf("%d", &id_em);
                    printf("ID da conta de destino: ");
                    scanf("%d", &id_des);
                    printf("Valor a ser transferido (em centavos): ");
                    scanf("%d", &valor);

                    banco.transferencia(id_em, id_des, valor);
                    break;
                case 6: banco.mostraTotal(); break;
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

        catch (saldoInsuficiente &e) {
            printf("\nErro: %s\n\n", e.what());
        }

        catch (std::exception &e) {
            printf("\nErro indefinido identificado\n\n");
        }

    } while(opt != 0);

    return 0;
}
