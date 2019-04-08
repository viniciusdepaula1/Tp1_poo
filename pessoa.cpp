#include "pessoa.hpp"

int pessoa::count = 1;

pessoa::pessoa(){
    ID = count;
    count++;
}

pessoa::pessoa(int idade, string nome){
    this->idade = idade;
    this->nome = nome;
    ID = count;
    count++;
}

pessoa::pessoa(int idade, string nome, endereco end)  : End(end), nome(nome), idade(idade), ID(count){
    count++;
}

void pessoa::setEnd(endereco end){
    this->End.addEnd(end);
}
