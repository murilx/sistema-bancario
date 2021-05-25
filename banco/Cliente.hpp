#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string nome;
        std::string cpf;

    public:
        // Construtor com parâmetros
        Cliente(std::string nome, std::string cpf) {
            this->nome = nome;
            this->cpf = cpf;
        }

        // Construtor de cópia
        Cliente(Cliente& outro) {
            this->nome = outro.nome;
            this->cpf = outro.cpf;
        }

        // getters e setters
        inline std::string getNome() const;
        inline std::string getCPF() const;
};

inline std::string Cliente::getNome() const {
    return (this->nome);
}

inline std::string Cliente::getCPF() const {
    return (this->cpf);
}

#endif
