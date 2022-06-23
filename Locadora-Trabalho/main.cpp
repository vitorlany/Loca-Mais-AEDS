#include <iostream>

using namespace std;

int proximoCodigoCliente = 0;
int proximoCodigoVeiculo = 0;
int proximoCodigoLocacao = 0;

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

    ClasseVeiculo(string _descricao, string _modelo, string _cor, string _placa, int _valor, int _ocupantes);
};

ClasseVeiculo::ClasseVeiculo(string _descricao, string _modelo, string _cor, string _placa, int _valor, int _ocupantes) {
    codigo = proximoCodigoVeiculo++;
    descricao = _descricao;
    modelo = _modelo;
    cor = _cor;
    placa = _placa;
    valor = _valor;
    ocupantes = _ocupantes;
}

// Locacao

class ClasseLocacao {
public:
    int codigoLocacao;
    string dataRetirada;
    string dataDevolucao;
    int seguro;
    int dias;
    int codigoCliete;
    int codigoVeiculo;

    ClasseLocacao(string _dataRetirada, string _dataDevolucao, int _seguro, int _codigoCliete, int _codigoVeiculo);
};

ClasseLocacao::ClasseLocacao(string _dataRetirada, string _dataDevolucao, int _seguro, int _codigoCliete, int _codigoVeiculo) {
    codigoLocacao = proximoCodigoLocacao++;
    dataRetirada = _dataRetirada;
    dataDevolucao = _dataDevolucao;
    seguro = _seguro;
    dias = 0;
    codigoCliete = _codigoCliete;
    codigoVeiculo = _codigoVeiculo;
}

void exemploCliente();
void exemploVeiculo();
void exemploLocacao();

int main()
{
    cout << "Exemplo de Cliente =============================" << endl;
    exemploCliente();
    cout << endl;

    cout << "Exemplo de Veiculo =============================" << endl;
    exemploVeiculo();
    cout << endl;

    cout << "Exemplo de Locacao =============================" << endl;
    exemploLocacao();
    cout << endl;

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

void exemploVeiculo() {
    ClasseVeiculo carro("Faz vrun vrun", "Maverik V8", "Preto", "ABC-1234", 80, 2);

    cout << "Codigo: " << carro.codigo << endl;
    cout << "Descricao: " << carro.descricao << endl;
    cout << "Modelo: " << carro.modelo << endl;
    cout << "Cor: " << carro.cor << endl;
    cout << "Placa: " << carro.placa << endl;
    cout << "Valor: " << carro.valor << endl;
    cout << "Status: " << carro.status << endl;
    cout << "Ocupantes: " << carro.ocupantes << endl;
}

void exemploLocacao() {
    ClasseCliente cliente("Raul", "Rua teste", 456, 234, 1111);
    ClasseVeiculo carro("SUV", "BMW X6", "Preto", "DEF-5678", 80, 4);

    ClasseLocacao locacao("01-01-2022", "05-05-2022", 1, cliente.codigo, carro.codigo);

    cout << "Codigo: " << locacao.codigoLocacao << endl;
    cout << "Retirada: " << locacao.dataRetirada << endl;
    cout << "Devolucao: " << locacao.dataDevolucao << endl;
    cout << "Seguro: " << locacao.seguro << endl;
    cout << "Dias: " << locacao.dias << endl;
    cout << "Codigo do Cliente: " << locacao.codigoCliete << endl;
    cout << "Codigo do Veiculo: " << locacao.codigoVeiculo << endl;

    cout << endl;

    cout << "Cliente: " << cliente.nome << endl;
    cout << "Veiculo: " << carro.modelo << endl;

}
