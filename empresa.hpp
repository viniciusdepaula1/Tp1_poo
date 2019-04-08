#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include "endereco.hpp"

class empresa
{
    private:
        endereco End;
        string nome;
        int funcionarios;
        int ID;
        static int count;
    public:
        empresa() {}
        empresa(string nome, int funcionarios, endereco end);
        void addEmp(empresa emp);
        void mostra();
        ~empresa() {count--;}
};

#endif // !EMPRESA_HPP