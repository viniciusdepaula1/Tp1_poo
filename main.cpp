#include "pessoa.hpp"
#include "desempregado.hpp"
#include "empresa.hpp"
#include "endereco.hpp"
#include "vagas.hpp"

using namespace std;

int main(){
    endereco *fAll = new endereco("jbf", "cB", "sL", 168);
    pessoa *a1 = new pessoa();
    pessoa *a2 = new pessoa(10, "Vinicius");

    desempregado *d1 = new desempregado(); 
    d1->setTempo(10);
    d1->setSkill("Bom");
    d1->setSkill("Ruim");
    d1->setSkill("Feio");
    d1->setEnd(*fAll);

    desempregado *d2 = new desempregado(12,"vini" ,21, *fAll);
    d2->setSkill("Bom");
    d2->setSkill("Ruim");
    d2->setSkill("Feio");
    d2->mostra();

    empresa *e1 = new empresa("imperio", 100, *fAll);
    list<string>l1 = {"bonito", "fei", "horrorozo"};
    vagas *v1 = new vagas(1, 1.21, 500, *e1, l1);
    v1->mostra();

    delete a1;
    delete a2;
    delete d1;
    delete d2;
    delete v1;

    return 0;
}