#include "empresa.hpp"

int empresa::count = 1;

empresa::empresa(string nome, int funcionarios, endereco end){
    this->End.addEnd(end);
    this->funcionarios = funcionarios;
    this->nome = nome;
    ID = count;
    count++;
}

void empresa::addEmp(empresa emp){
    this->End = emp.End;
    this->funcionarios = emp.funcionarios;
    this->nome = emp.nome;
    this->ID = count;
    count++;
}

void empresa::mostra(){
    cout << ID << " " << nome << " " << funcionarios << endl;
}