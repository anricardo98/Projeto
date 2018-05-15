#ifndef OPERARIO_HPP
#define OPERARIO_HPP

#include <string>
#include <iostream>
using namespace std;
#include "C:\Users\anric\LP_lab\Empresa\Funcionario.hpp"

class Operario: public Funcionario{
protected:
    string fabrica;
public:
    string getFabrica();
    void setFabrica(string fabrica);
};

string Operario::getFabrica(){
    return fabrica;
}

void Operario::setFabrica(string fabrica){
    this->fabrica = fabrica;
}

#endif
