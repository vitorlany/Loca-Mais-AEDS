#include <iostream>
#include <fstream>
#include <ctime>

#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include "ClasseLocacao.h"
#include "locacao-sistema.h"

using namespace std;

int main()
{
    ClasseLocacao locacao;
    locacao.criarLocacao();

    return 0;
}
