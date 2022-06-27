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
        int deletado = 0;

        ClasseCliente();
};

#endif // CLASSECLIENTE_H
