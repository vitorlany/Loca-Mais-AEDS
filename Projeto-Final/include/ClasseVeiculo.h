#ifndef CLASSEVEICULO_H
#define CLASSEVEICULO_H
#include <iostream>

using namespace std;

class ClasseVeiculo
{
    public:
        int codigo;
        char descricao[50];
        char modelo[50];
        char cor[50];
        char placa[50];
        int valor;
        int ocupantes;
        // 0 = Alugado / 1 = Disponivel / 2 = Manutencao
        int status = 1;
        int deletado = 0;

        void criarVeiculo();
        void dadosVeiculo();
        void alterarVeiculo();
        void deletarVeiculo();
};

#endif // CLASSEVEICULO_H
