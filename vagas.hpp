#ifndef VAGAS_HPP
#define VAGAS_HPP

#include "empresa.hpp"
#include <list>

class vagas
{
    private:
        empresa Emp;
        int id;
        list <string> Skills;
        float horas;
        float remuneracao;
    public:
        vagas() {}
        vagas(int id, float horas, float remuneracao, empresa empres, list<string>sk);
        void mostra();
        ~vagas() {}
};

#endif // !VAGAS_HPP