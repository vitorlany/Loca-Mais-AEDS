#include "ClasseLocacao.h"
#include <iostream>

using namespace std;

int proximoCodigoLocacao = 0;

ClasseLocacao::ClasseLocacao()
{
    codigoLocacao = proximoCodigoLocacao++;

    cout << "Insira a data de retirada (string): ";
    cin >> dataRetirada;

    cout << "Insira a data de devolucao (string): ";
    cin >> dataDevolucao;

    cout << "Insira o seguro (int): ";
    cin >> seguro;

    cout << "Insira os dias (int): ";
    cin >> dias;

    cout << "Insira o codigo do cliente (int): ";
    cin >> codigoCliete;

    cout << "Insira o codigo do veiculo (int): ";
    cin >> codigoVeiculo;
}

void ClasseLocacao::deletarLocacao()
{
    deletado = 1;
}
