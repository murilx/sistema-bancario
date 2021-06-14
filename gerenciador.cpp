/*
    Nome do programa: gerenciador.cpp
    Desenvolvedor: Murilo Magiolo Geraldini <murilo.geraldini@unesp.br>
    Matéria: Programação Orientada a Objetos

    Descrição: Código destinado para o Trabalho 1 da matéria de 
    Programação Orientada a Objetos. O código se trata de um sistema
    bancário simplista. 

    O banco que está sendo gerenciado já começa com 4 contas, todas
    com saldo inicial de 1000 reais, e 3 clientes.
*/

#include <stdio.h>
#include <exception>

#include "err/Error.hpp"
#include "banco/Banco.hpp"

/* Optei por deixar o printf e o scanf ao invés de std::cout e std::cin pois a
   classe Banco se beneficia da capacidade de 'formatação' de texto do printf, deixando
   o código menor e mais fácil de ser lido na minha opinião */

int main() {
    int opt, id;
    Banco banco;

    do {
        printf("\n");
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
                default: throw opcaoInvalida();
            }
        }

        catch (opcaoInvalida &e) {
            printf("\nErro: %s\n", e.what());
        }

        catch (totalIncorreto &e) {
            printf("\nErro: %s\n", e.what());
        }

        catch (contaInexistente &e) {
            printf("\nErro: %s\n", e.what());
        }

        catch (saldoInsuficiente &e) {
            printf("\nErro: %s\n", e.what());
        }

        catch (std::exception &e) {
            printf("\nErro: %s\n", e.what());
        }

        catch (...) {
            printf("\nErro: Erro indefinido.\n");
        }

    } while(opt != 0);

    return 0;
}
