#include "ClasseVeiculo.h"
#include <iostream>

using namespace std;

int proximoCodigoVeiculo = 0;

ClasseVeiculo::ClasseVeiculo(string _descricao, string _modelo, string _cor, string _placa, int _valor, int _ocupantes)
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
