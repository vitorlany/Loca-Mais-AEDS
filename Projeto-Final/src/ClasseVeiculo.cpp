#include "ClasseVeiculo.h"
#include <iostream>

using namespace std;

int proximoCodigoVeiculo = 0;

ClasseVeiculo::ClasseVeiculo()
{
    codigo = proximoCodigoVeiculo++;

    cout << "Insira o modelo (string): ";
    cin >> modelo;

    cout << "Insira a descricao (string): ";
    cin >> descricao;

    cout << "Insira a cor (string): ";
    cin >> cor;

    cout << "Insira a placa (string): ";
    cin >> placa;

    cout << "Insira o valor da diaria (int): ";
    cin >> valor;

    cout << "Insira quantos ocupantes (int): ";
    cin >> ocupantes;
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
