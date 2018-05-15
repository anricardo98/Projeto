#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "C:\Users\anric\LP_lab\Empresa\Funcionario.hpp"
#include "C:\Users\anric\LP_lab\Empresa\gerente.hpp"
#include "C:\Users\anric\LP_lab\Empresa\Empresa.hpp"
#include "C:\Users\anric\LP_lab\Empresa\operario.hpp"
#include "C:\Users\anric\LP_lab\Empresa\secretario.hpp"
#include "C:\Users\anric\LP_lab\Empresa\data.hpp"

int main(){
    int execucao = 1;
    Empresa tal;
    int opcoes;

    while (execucao == 1){
        cout << "O que voce deseja realizar?" << endl;
        cout << "Digite 1 se deseja adicionar um elemento a lista" << endl;
        cout << "Digite 2 se deseja aumentar os salarios" << endl;
        cout << "Digite 3 se deseja mostrar os elemento da lista" << endl;
        cout << "Digite 4 se deseja mostrar os novos funcionarios" << endl;
        cin >> opcoes;

        cout << "Deseja realizar outra operacao?" << endl;
        cout << "Digite 1 se sim" << endl;
        cin >> execucao;
    }
}



