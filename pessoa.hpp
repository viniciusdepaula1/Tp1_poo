#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include "endereco.hpp"
using namespace std;

class pessoa
{
    protected:
        endereco End;
        string nome;
        int idade;
        int ID;
        static int count;
    public:
        pessoa();
        pessoa(int idade, string nome);
        pessoa(int idade, string nome, endereco end);
        void setNome(string nome) {this->nome = nome;}
        void setIdade(int idade) {this->idade = idade;}
        void setEnd(endereco end);
        ~pessoa() {count--;}
};


#endif // !PESSOA_HPP