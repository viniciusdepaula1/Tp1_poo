#ifndef DESEMPREGADO_HPP
#define DESEMPREGADO_HPP

#include "pessoa.hpp"
#include <list>

class desempregado : public pessoa
{
    private:
        int tempo;
        list <string> skills;
        static int countD;
    public:
        desempregado();
        desempregado(int idade, string nome, int tempo, endereco end);
        void setTempo(int tempo) {this->tempo = tempo;}
        void setSkill(string skill) {skills.push_back(skill);}
        void mostra();
        ~desempregado() {countD--;}
};  

#endif // !DESEMPREGRADO_HPP