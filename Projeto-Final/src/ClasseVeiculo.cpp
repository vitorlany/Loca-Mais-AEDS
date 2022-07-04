#include "ClasseVeiculo.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int ultimoCodigoVeiculo();
int proximoCodigoVeiculo = (ultimoCodigoVeiculo() + 1);

void ClasseVeiculo::criarVeiculo()
{
    codigo = proximoCodigoVeiculo++;

    cout << "Insira o modelo (string): ";
    gets(modelo);
    fflush(stdin);

    cout << "Insira a descricao (string): ";
    gets(descricao);
    fflush(stdin);

    cout << "Insira a cor (string): ";
    gets(cor);
    fflush(stdin);

    cout << "Insira a placa (string): ";
    gets(placa);
    fflush(stdin);

    cout << "Insira o valor da diaria (int): ";
    cin >> valor;
    fflush(stdin);

    cout << "Insira quantos ocupantes (int): ";
    cin >> ocupantes;
    fflush(stdin);
}

void ClasseVeiculo::deletarVeiculo()
{
    deletado = 1;
}

void ClasseVeiculo::dadosVeiculo()
{
    cout << "Codigo: " << codigo << endl;
    cout << "Descricao: " << descricao << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Placa: " << placa << endl;
    cout << "Valor: " << valor << endl;
    cout << "Status: " << status << endl;
    cout << "Ocupantes: " << ocupantes << endl;
    cout << "Deletado: " << deletado << endl;
}

void ClasseVeiculo::alterarVeiculo() {
    cout << "Insira o modelo (string) [" << modelo <<"]: ";
    cin >> modelo;
    fflush(stdin);

    cout << "Insira a descricao (string) [" << descricao << "]: ";
    cin >> descricao;
    fflush(stdin);

    cout << "Insira a cor (string): [" << cor << "]";
    cin >> cor;
    fflush(stdin);

    cout << "Insira a placa (string) [" << placa << "]: ";
    cin >> placa;
    fflush(stdin);

    cout << "Insira o valor da diaria (int) [" << valor << "]: ";
    cin >> valor;
    fflush(stdin);

    cout << "Insira quantos ocupantes (int) [" << ocupantes << "]: ";
    cin >> ocupantes;
    fflush(stdin);
}

int ultimoCodigoVeiculo() {
    int ultimo = 0,pos, posicao;
    ClasseVeiculo molde;
    fstream fio;
    fio.open ("dados/veiculos.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseVeiculo)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        ultimo = molde.codigo;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return ultimo;
}
