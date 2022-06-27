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
        int deletado = 0;

        ClasseLocacao();
};

#endif // CLASSELOCACAO_H
