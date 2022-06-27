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

        ClasseVeiculo(string _descricao, string _modelo, string _cor, string _placa, int _valor, int _ocupantes);
};

#endif // CLASSEVEICULO_H
