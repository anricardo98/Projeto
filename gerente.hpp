#ifndef GERENTE_HPP
#define GERENTE_HPP
#include <iostream>
using namespace std;
#include "C:\Users\anric\LP_lab\Empresa\Funcionario.hpp"

class Gerente: public Funcionario{
protected:
    string senha;
    int n_func;
public:
    string getSenha();
    int getN_func();
    void setSenha(string senha);
    void setN_func(int n_func);
};

string Gerente::getSenha(){
    return senha;
}

int Gerente::getN_func(){
   return n_func;
}

void Gerente::setSenha(string senha){
    this->senha = senha;
}

void Gerente::setN_func(int n_func){
    this->n_func = n_func;
}

#endif
