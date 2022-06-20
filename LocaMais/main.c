#include <stdio.h>
#include <stdlib.h>

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
    cliente.codigo = 15;
    strcpy(cliente.nome,"Vitor");
    strcpy(cliente.endereco.rua, "Nome da Rua");
    cliente.endereco.numero = 123;
    cliente.endereco.cep = 123456;
    printf("Cliente: %i, %s, %s, %i, %i", cliente.codigo, cliente.nome, cliente.endereco.rua, cliente.endereco.numero, cliente.endereco.cep);
    return 0;
}
