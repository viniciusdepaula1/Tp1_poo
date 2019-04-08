#include "desempregado.hpp"

int desempregado::countD = 1;

desempregado::desempregado(){
    this->ID = countD;
    countD++;
}

desempregado::desempregado(int idade, string nome, int tempo, endereco end) : pessoa(idade, nome, end) {
    this->tempo = tempo;
    this->ID = countD;
    countD++; 
}

void desempregado::mostra(){
    cout << idade << endl;
    list<string>::iterator iterator = skills.end();
    for(auto itr = skills.begin(); itr != skills.end();itr++)
        cout << *itr << " ";
    cout << endl;
}