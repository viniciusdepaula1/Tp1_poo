#include "vagas.hpp"

vagas::vagas(int id, float horas, float remuneracao, empresa empres, list<string>sk){
    this->id = id;
    this->horas = horas;
    this->remuneracao = remuneracao;
    this->Emp.addEmp(empres);
    this->Skills.merge(sk);
}

void vagas::mostra(){
    cout << this->id << " " << this->horas << " " << this->remuneracao << endl;
    list<string>::iterator iterator = Skills.end();
    for(auto itr = Skills.begin(); itr != Skills.end();itr++)
        cout << *itr << endl;
    this->Emp.mostra();
}