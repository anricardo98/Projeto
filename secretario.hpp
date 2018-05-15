#ifndef SECRETARIO_HPP
#define SECRETARIO_HPP
#include <iostream>
using namespace std;
#include "C:\Users\anric\LP_lab\Empresa\Funcionario.hpp"

class Secretario: public Funcionario{
protected:
    int ramal;
public:
    int getRamal();
    void setRamal(int ramal);
};

int Secretario::getRamal(){
    return ramal;
}
void Secretario::setRamal(int ramal){
    this->ramal = ramal;
}

#endif
