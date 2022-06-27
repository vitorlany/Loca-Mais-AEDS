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

void ClasseCliente::deletarCliente()
{
    deletado = 1;
}

void ClasseCliente::dadosCliente()
{
    cout << "Codigo: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Rua: " << endereco.rua << endl;
    cout << "Numero: " << endereco.numero << endl;
    cout << "Cep: " << endereco.cep << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "Deletado: " << deletado << endl;
}
