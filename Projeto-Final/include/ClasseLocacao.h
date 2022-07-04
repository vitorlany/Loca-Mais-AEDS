#ifndef CLASSELOCACAO_H
#define CLASSELOCACAO_H
#include <iostream>

using namespace std;

class ClasseLocacao
{
    public:
        int codigoLocacao;
        char dataRetirada[50];
        char dataDevolucao[50];
        int seguro;
        int dias;
        int codigoCliete;
        int codigoVeiculo;
        int deletado = 0;
        int valorFinal;

        void criarLocacao();
        void deletarLocacao();
        void dadosLocacao();
};

#endif // CLASSELOCACAO_H
