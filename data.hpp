#ifndef DATA_HPP
#define DATA_HPP
#include <string>
#include <iostream>
using namespace std;

class Data{
protected:
    int dia;
    int mes;
    int ano;
public:
    int getDia();
    int getMes();
    int getAno();
    void setDia(int dia);
    void setMes (int mes);
    void setAno (int ano);
};

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes (int mes){
    this->mes = mes;
}

void Data::setAno (int ano){
    this->ano = ano;
}


#endif
