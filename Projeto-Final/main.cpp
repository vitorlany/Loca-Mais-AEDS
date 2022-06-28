#include <iostream>
#include <ctime>

#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include "ClasseLocacao.h"
#include "locacao-sistema.h"

using namespace std;

int main()
{
    int umDia = 24 * 60 * 60;
    int dias = 5;

    time_t dataRetirada;
    time(&dataRetirada);
    char retiradaStr[80];
    tm * retirada = localtime(&dataRetirada);

    strftime(retiradaStr, 80, "%d/%m/%Y", retirada);

    cout << retiradaStr << endl;


    time_t dataDevolucao;
    time(&dataDevolucao);
    char devolucaoStr[80];
    time_t novosDias = dataDevolucao + (dias * umDia);
    tm * devolucao = localtime(&novosDias);

    strftime(devolucaoStr, 80, "%d/%m/%Y", devolucao);

    cout << devolucaoStr << endl;

    return 0;
}
