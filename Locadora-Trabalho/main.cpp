#include <iostream>

using namespace std;

int proximoCodigoCliente = 0;
int proximoCodigoVeiculo = 0;

// Clientes

class ClasseClienteEndereco {
    public:
        string rua;
        int numero;
        int cep;
};

class ClasseCliente {
    public:
        int codigo;
        string nome;
        ClasseClienteEndereco endereco;
        int telefone;


        ClasseCliente(string _nome, string _rua, int _numero, int _cep, int _telefone);
};

ClasseCliente::ClasseCliente(string _nome, string _rua, int _numero, int _cep, int _telefone) {
    codigo = proximoCodigoCliente++;
    nome = _nome;
    endereco.rua = _rua;
    endereco.numero = _numero;
    endereco.cep = _cep;
    telefone = _telefone;
}

// Veiculos

class ClasseVeiculo {
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
};

int main()
{


    return 0;
}

void exemploCliente() {
    ClasseCliente cliente("Vitor", "Rua pipi", 123, 1256, 9999);

    cout << "Codigo: " << cliente.codigo << endl;
    cout << "Nome: " << cliente.nome << endl;
    cout << "Rua: " << cliente.endereco.rua << endl;
    cout << "Numero: " << cliente.endereco.numero << endl;
    cout << "Cep: " << cliente.endereco.cep << endl;
    cout << "Telefone: " << cliente.telefone << endl;
}
