#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "C:\Users\anric\LP_lab\Empresa\Funcionario.hpp"

class Empresa{
protected:
    vector<Funcionario*> dados;
    string n_empresa;
    int cnpj;
public:
    Empresa();
    string getN_empresa();
    int getCnpj();
    void setN_empresa(string a);
    void setCnpj(int a);

    void adicionar(Funcionario *a);
    void aumento();
    void mostrar();
    void media();
    // friend ostream& operator << (ostream &o, Lista *l);

};

Empresa::Empresa(){
    string x;
    int y;

    cout << "Qual o nome da empresa?" << endl;
    cin >> x;
    setN_empresa(x);

    cout << "Qual o CNPJ da empresa?" << endl;
    cin >> y;
    setCnpj(y);
}

string Empresa::getN_empresa(){
    return n_empresa;
}

int Empresa::getCnpj(){
    return cnpj;
}

void Empresa::setN_empresa(string a){
    n_empresa = a;
}

void Empresa::setCnpj(int a){
    cnpj = a;
}

void Empresa::adicionar(Funcionario *a){
    int aux = 0;
    for (int i = 0; i < dados.size();i++){
        if (strcmp (a->nome, dados[i]->getNome()) != 0){
            aux++;
        }
    }

    if (aux == dados.size()){
        dados.push_back(a);
    }
}

void Empresa::aumento(){
    for (int i = 0; i < dados.size(); i++){
        int aux = dados[i]->getTipo();

        if (aux == 1){
            float x = dados[i]->getSal();
            x = 1.05 * x;
            dados[i]->setSal(x);
        }

        else if (aux == 2){
            float x = dados[i]->getSal();
            x = 1.05 * x;
            dados[i]->setSal(x);
        }

        else if (aux == 3){
            float x = dados[i]->getSal();
            x = 1.05 * x;
            dados[i]->setSal(x);
        }
    }
}

void Empresa::mostrar(){
    for (int i = 0; i < dados.size();i++){
        cout << dados[i]->getNome() << endl;
    }
}

void Empresa::novos(){
    int x, y, z, a, b, c;
    cout << "Qual a data corrente?" << endl;
    cout << "digite o dia: ";
    cin >> x;
    cout << endl << "digite o mes, em forma de numero: ";
    cin >> y;
    cout << endl << "digite o ano: "
    cin >> z;
    cout << endl;

    int atual = x + (30 * y) + (365 * z);

    for (int i = 0; i < data.size(); i++){
        a = data[i]->getDia();
        b = data[i]->getMes();
        c = data[i]->getAno();
        admissao = a + (30 * b) + (365 * c);

        int diferenca = atual - admissao;

        if (diferenca <= 90){
            cout << data[i]->getNome();
        }
    }
}

ostream& operator << (ostream &o, Lista *l){
    o <<
}

#endif
