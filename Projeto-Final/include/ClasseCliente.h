#ifndef CLASSECLIENTE_H
#define CLASSECLIENTE_H
#include <iostream>

using namespace std;

class ClasseClienteEndereco {
    public:
        string rua;
        int numero;
        int cep;
};

class ClasseCliente
{
    public:
        int codigo;
        string nome;
        ClasseClienteEndereco endereco;
        int telefone;

        ClasseCliente(string _nome, string _rua, int _numero, int _cep, int _telefone);
};

#endif // CLASSECLIENTE_H
