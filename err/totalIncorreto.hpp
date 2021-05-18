#ifndef TOTAL_INCORRETO_HPP
#define TOTAL_INCORRETO_HPP

#include <exception>

class totalIncorreto : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Balanco geral do bando incorreto. Abortando...";
        }
};

#endif
