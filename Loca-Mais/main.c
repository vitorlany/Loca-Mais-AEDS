#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "locadora.h"

struct construtorEndereco{
    char rua[50];
    int numero;
    int cep;
};
typedef struct construtorEndereco tipoEndereco;

struct construtorCliente{
    int codigo;
    char nome[50];
    tipoEndereco endereco;
};
typedef struct construtorCliente tipoCliente;


int main()
{
    tipoCliente cliente;

    novoCliente(tipoCliente & cliente);

    printf("Cliente: %i, %s, %s, %i, %i", cliente.codigo, cliente.nome, cliente.endereco.rua, cliente.endereco.numero, cliente.endereco.cep);
    teste();
    return 0;
}
