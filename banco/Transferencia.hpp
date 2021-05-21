#ifndef TRANSFERENCIA_HPP
#define TRANSFERENCIA_HPP

class Transferencia {
    private:
        int id_emissario;
        int id_destinatario;
        int v_enviado;

    public:
        // Construtor com parâmetros
        Transferencia(int id_em, int id_des, int valor) {
            this->id_emissario = id_em;
            this->id_destinatario = id_des;
            this->v_enviado = valor;
        }

        // Getters e setters
        inline int getIdEm() const;
        inline int getIdDes() const;
        inline int getValor() const;
};

inline int Transferencia::getIdEm() const {
    return (this->id_emissario);
}

inline int Transferencia::getIdDes() const {
    return (this->id_destinatario);
}

inline int Transferencia::getValor() const {
    return (this->v_enviado);
}

#endif
