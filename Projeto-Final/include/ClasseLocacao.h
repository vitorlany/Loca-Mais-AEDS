#ifndef CLASSELOCACAO_H
#define CLASSELOCACAO_H
#include <iostream>

using namespace std;

class ClasseLocacao
{
    public:
        int codigoLocacao;
        string dataRetirada;
        string dataDevolucao;
        int seguro;
        int dias;
        int codigoCliete;
        int codigoVeiculo;
        ClasseLocacao(string _dataRetirada, string _dataDevolucao, int _seguro, int _dias, int _codigoCliete, int _codigoVeiculo);
};

#endif // CLASSELOCACAO_H
