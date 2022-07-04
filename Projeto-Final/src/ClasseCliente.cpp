#include "ClasseCliente.h"
#include <iostream>
#include <fstream>

using namespace std;
int ultimoCodigoCliente();

int proximoCodigoCliente = (ultimoCodigoCliente() + 1);

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


int ultimoCodigoCliente() {
    int ultimo = 0,pos, posicao;
    ClasseCliente molde;
    fstream fio;
    fio.open ("dados/clientes.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseCliente)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        ultimo = molde.codigo;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return ultimo;
}
