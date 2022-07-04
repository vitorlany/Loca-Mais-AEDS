#ifndef CLASSECLIENTE_H
#define CLASSECLIENTE_H
#include <iostream>

using namespace std;

class ClasseClienteEndereco {
    public:
        char rua[50];
        int numero;
        int cep;
};

class ClasseCliente
{
    public:
        int codigo;
        char nome[50];
        ClasseClienteEndereco endereco;
        int telefone;
        int deletado = 0;

        void criarCliente();
        void dadosCliente();
        void deletarCliente();
};

#endif // CLASSECLIENTE_H
