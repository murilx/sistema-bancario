#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string nome;

    public:
        // Construtor com parâmetros
        Cliente(std::string nome) {
            this->nome = nome;
        }

        // Construtor de cópia
        Cliente(Cliente& outro) {
            this->nome = outro.nome;
        }

        // getters e setters
        inline std::string getNome() const;
};

inline std::string Cliente::getNome() const {
    return this->nome;
}

#endif
