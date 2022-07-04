#include "ClasseVeiculo.h"
#include <iostream>
#include <string>

using namespace std;

int proximoCodigoVeiculo = 0;

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
