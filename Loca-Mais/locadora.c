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


void novoCliente(tipoCliente * cliente) {
    cliente->codigo = 15;
    strcpy(cliente->nome,"Vitor");
    strcpy(cliente->endereco.rua, "Nome da Rua");
    cliente->endereco.numero = 123;
    cliente->endereco.cep = 123456;
}
