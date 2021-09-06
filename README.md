# Sistema Bancário C++
> Programa criado para a matéria de Programação Orientada a Objetos 

Um mini sistema bancário feito em C++ com o objetivo de estudar e implementar um projeto utilizando o paradigma de programação orientada a objeto, bem como
o estudo e implementação de excessões. 

## Funcionamento
O usuário é capaz de controlar o programa através de um menu de console. O programa possui 6 opções, estas são

1. Listar clientes
2. Listar contas
3. Saldo da conta
4. Extrato da conta
5. Realizar transferência entre contas
6. Mostrar valores totais das contas

Como o objetivo do projeto não era a criação de um modelo real e com propósito no mundo real e sim estudar o paradigma de programção orientada a objeto e
também a escrita de testes (através do lançamento de excessões) como pode ser visto no 
[enunciado](https://github.com/murilx/sistema-bancario-cpp/blob/main/README.md#enunciado) do projeto, não há nenhum modo de inserção
de clientes e/ou contas e todas elas foram introduzidas no código fonte do projeto.

Como resultado, o projeto possui **4 contas** e **3 clientes**. Cada conta possui um saldo preestabelecido e devem pertencer a um cliente. Três das contas
possui saldo inicial de 1000 reais e a outra possui saldo inicial de 500 reais.

Todo o dinheiro foi tratado como sendo um `int` e estando em centavos para evitar qualquer problema de arredondamento durante as manipulações 
de saldo que poderiam ser causadas caso fosse utilizado variáveis `double`.



## Instalação
Caso você queira ver o funcionamento do programa você pode compila-lo na sua máquina. Para isso é necessário que tenha as seguintes dependências
* git (Dispensável caso baixe o código fonte em formato compactado pelo GitHub).
* g++
* make

O processo de download e compilação é feito pelos seguintes passos
```sh
git clone https://github.com/murilx/sistema-bancario-cpp.git
cd sistema-bancario-cpp
make
```

Após a execução do make você pode executar o programa
```sh
./gerenciador
```

## Enunciado
> Enunciado retirado do enunciado original feito pelo professor da matéria Thiago Gottardi

**Introdução**

Neste projeto de trabalho, o/a aluno(a) deverá implementar um pequeno sistema bancário com menu de console.

**Motivação**

No currículo 1998, esta disciplina é nomeada "Linguagens Comerciais de Programação". Antes de 1998, alunos costumeiramente aprendiam a "Linguagem Comum Orientada para os Negócios" (COBOL) e muitos dos exemplos eram focados em sistemas bancários.

**Justificativa**

A vantagem de implementar um sistema bancário é sua importância intrínseca de auditoria contábil, que ensina os alunos a escrever testes de forma natural.

**Projeto e Requisitos**

Implemente um sistema bancário simplista. Neste sistema, devem ser gerenciados os seguintes conceitos:

**Conceitos:**

1. Banco (só uma agência com vários clientes)
2. Cliente (do banco, pode ter várias contas)
3. Conta (de um cliente)
4. Transferência (entre duas contas)

**Caso de uso:**

O/a operador(a) do sistema (não precisa ser identificado(a)) usa menus de texto.
Nestes menus, ele(a) pode selecionar a operação:

1. Lista clientes;
2. Lista contas;
3. Saldo do cliente (ou da conta);
4. Extrato do cliente (ou da conta);
5. Realizar transferência entre contas;
6.Mostrar valores totais de todas as contas.

As contas começam já com valores padrão, exemplo, 1000 reais para cada cliente.
O banco não recebe valores de fora, nem envia valores para fora. Depois de criar todas as contas no construtor, calcule o somatório total dos saldos. Este total deve ser constante. Ou seja, todas as transferências devem ser testadas com o total de todas as contas, antes e depois e verificar se o balanço é mantido.

Lance tipos específicos de exceções, como por exemplo, ao detectar número de contas inválido e falta de saldo para transferências. Use o tratamento de exceções para exibir mensagens ao operador.

Escreva destrutores e garanta que todos os ponteiros alocados com "new" sejam desalocados com "delete" ao término do programa.

**Linguagem:** C++ 2003.
