#include "ClasseLocacao.h"
#include <ctime>
#include <iostream>

void calcularData(int dias, string * _dataRetirada, string * _dataDevolucao);

using namespace std;

int proximoCodigoLocacao = 0;

ClasseLocacao::ClasseLocacao()
{
    int _valorFinal = 0;
    codigoLocacao = proximoCodigoLocacao++;

    cout << "Insira quantos dias (int): ";
    cin >> dias;

    calcularData(dias, &dataRetirada, &dataDevolucao);

    cout << "Insira o seguro (int): ";
    cin >> seguro;

    cout << "Insira o codigo do cliente (int): ";
    cin >> codigoCliete;

    cout << "Insira o codigo do veiculo (int): ";
    cin >> codigoVeiculo;

    if (seguro) {
        _valorFinal+=50;
    }
    // Funcao para pegar pelo codigo do veiculo o valor da diaria e multiplicar pelos dias
    valorFinal = _valorFinal;
}

void ClasseLocacao::deletarLocacao()
{
    deletado = 1;
}

void ClasseLocacao::dadosLocacao()
{
    cout << "Codigo: " << codigoLocacao << endl;
    cout << "Retirada: " << dataRetirada << endl;
    cout << "Devolucao: " << dataDevolucao << endl;
    cout << "Seguro: " << seguro << endl;
    cout << "Dias: " << dias << endl;
    cout << "Cliente: " << codigoCliete << endl;
    cout << "Veiculo: " << codigoVeiculo << endl;
    cout << "Valor Final: " << valorFinal << endl;
    cout << "Deletado: " << deletado << endl;
}

void calcularData(int dias, string * _dataRetirada, string * _dataDevolucao) {
    int umDia = 24 * 60 * 60;

    time_t dataRetirada;
    time(&dataRetirada);
    char retiradaStr[80];
    tm * retirada = localtime(&dataRetirada);

    strftime(retiradaStr, 80, "%d/%m/%Y", retirada);

    *_dataRetirada = retiradaStr;


    time_t dataDevolucao;
    time(&dataDevolucao);
    char devolucaoStr[80];
    time_t novosDias = dataDevolucao + (dias * umDia);
    tm * devolucao = localtime(&novosDias);

    strftime(devolucaoStr, 80, "%d/%m/%Y", devolucao);

    *_dataDevolucao = devolucaoStr;
}
