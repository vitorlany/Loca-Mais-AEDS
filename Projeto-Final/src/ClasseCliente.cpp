#include "ClasseCliente.h"
#include <iostream>

using namespace std;

int proximoCodigoCliente = 0;

ClasseCliente::ClasseCliente()
{
    codigo = proximoCodigoCliente++;

    cout << "Insira o nome (string): ";
    cin >> nome;

    cout << "Insira a rua (string): ";
    cin >> endereco.rua;

    cout << "Insira o número (int): ";
    cin >> endereco.numero;

    cout << "Insira o cep (int): ";
    cin >> endereco.cep;

    cout << "Insira o telefone (int): ";
    cin >> telefone;
}
