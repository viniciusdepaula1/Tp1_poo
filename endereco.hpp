#ifndef ENDERECO_HPP
#define ENDERECO_HPP

#include <iostream>
using namespace std;

class endereco
{
    private:
        string rua;
        string bairro;
        string cidade;
        int numero;
    public:
        endereco() {}
        endereco(string rua, string bairro, string cidade, int numero) : rua(rua), bairro(bairro), cidade(cidade), numero(numero) {}
        void addEnd(endereco end) {rua = end.rua, bairro = end.bairro, cidade = end.cidade, numero = end.numero;}
        ~endereco() {}
};

#endif // !ENDERECO_HPP