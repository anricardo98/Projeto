#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <string>
#include <iostream>
using namespace std;
#include "C:\Users\anric\LP_lab\Empresa\data.hpp"

class Funcionario: public Data{
protected:
    string nome;
    float salario;
    int tipo;
public:
    int getTipo();
    string getNome();
    float getSalario();
    void setTipo (int tipo);
    void setNome(string nome);
    void setSal (float salario);
};

int Funcionario::getTipo(){
    return tipo;
}

string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setTipo(int tipo){
    this->tipo = tipo;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setSal(float salario){
    this->salario = salario;
}

#endif
