#ifndef PARAMETRO_INVALIDO_HPP
#define PARAMETRO_INVALIDO_HPP

class parametroInvalido {
    public:
        virtual const char* what() const throw() {
            return "Parametro invalido";
        }
};

#endif
