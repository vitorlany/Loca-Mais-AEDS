#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



void novoCliente(tipoCliente * cliente, char nome[], char rua[], int numeroDaRua, int cep);



int main()
{
    tipoCliente cliente;

    novoCliente(&cliente, "Vitor", "Nome da Rua", 123, 12345);

    printf("Cliente: %i, %s, %s, %i, %i", cliente.codigo, cliente.nome, cliente.endereco.rua, cliente.endereco.numero, cliente.endereco.cep);
    return 0;
}

void novoCliente(tipoCliente * cliente, char nome[], char rua[], int numeroDaRua, int cep) {
    cliente->codigo = 15;
    strcpy(cliente->nome, nome);
    strcpy(cliente->endereco.rua, rua);
    cliente->endereco.numero = numeroDaRua;
    cliente->endereco.cep = cep;
}
