#ifndef CLASSEVEICULO_H
#define CLASSEVEICULO_H
#include <iostream>

using namespace std;

class ClasseVeiculo
{
    public:
        int codigo;
        string descricao;
        string modelo;
        string cor;
        string placa;
        int valor;
        int ocupantes;
        // 0 = Alugado / 1 = Disponivel / 2 = Manutencao
        int status = 1;
        int deletado = 0;

        ClasseVeiculo();
        void deletarVeiculo();
        void dadosVeiculo();
};

#endif // CLASSEVEICULO_H
