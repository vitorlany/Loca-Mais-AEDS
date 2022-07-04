#include "ClasseCliente.h"
#include <iostream>

using namespace std;

int proximoCodigoCliente = 0;

void ClasseCliente::criarCliente()
{
    codigo = proximoCodigoCliente++;

    cout << "Insira o nome (string): ";
    gets(nome);
    fflush(stdin);

    cout << "Insira a rua (string): ";
    gets(endereco.rua);
    fflush(stdin);

    cout << "Insira o número (int): ";
    cin >> endereco.numero;
    fflush(stdin);

    cout << "Insira o cep (int): ";
    cin >> endereco.cep;
    fflush(stdin);

    cout << "Insira o telefone (int): ";
    cin >> telefone;
    fflush(stdin);
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
