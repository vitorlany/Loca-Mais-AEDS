#include "ClasseLocacao.h"
#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include <ctime>
#include <string.h>
#include <iostream>
#include <fstream>

void calcularData(int dias, char _dataRetirada[], char _dataDevolucao[]);
void salvarDados(ClasseLocacao locacao);
int precoDiaria(int codigoVeiculo);
int veiculoExiste(int codigoVeiculo);
int clienteExiste(int codigoCliente);
int ultimoCodigo();

using namespace std;

int proximoCodigoLocacao = (ultimoCodigo() + 1);

void ClasseLocacao::criarLocacao()
{
    int _valorFinal = 0;
    codigoLocacao = proximoCodigoLocacao++;

    cout << "Insira quantos dias (int): ";
    cin >> dias;
    fflush(stdin);

    calcularData(dias, dataRetirada, dataDevolucao);

    cout << "Insira o seguro (int): ";
    cin >> seguro;
    fflush(stdin);

    do {
        cout << "Insira o codigo do cliente (int): ";
        cin >> codigoCliete;
        fflush(stdin);
        if (clienteExiste(codigoCliete)) {
            break;
        } else {
            cout << "O cliente nao existe!" << endl;
        }
    } while(1);

    do {
        cout << "Insira o codigo do veiculo (int): ";
        cin >> codigoVeiculo;
        fflush(stdin);
        if (clienteExiste(veiculoExiste(codigoVeiculo))) {
            break;
        } else {
            cout << "O veiculo nao existe!" << endl;
        }
    } while(1);

    _valorFinal += (dias * precoDiaria(codigoVeiculo));

    if (seguro) {
        _valorFinal+=50;
    }

    // Funcao para pegar pelo codigo do veiculo o valor da diaria e multiplicar pelos dias
    valorFinal = _valorFinal;
}

void ClasseLocacao::deletarLocacao(){
    deletado = 1;
}

void ClasseLocacao::dadosLocacao() {
    cout << "Codigo: " << codigoLocacao << endl;
    cout << "Retirada: " << dataRetirada << endl;
    cout << "Devolucao: " << dataDevolucao << endl;
    cout << "Seguro: " << seguro << endl;
    cout << "Dias: " << dias << endl;
    cout << "Cliente: " << codigoCliete << endl;
    cout << "Veiculo: " << codigoVeiculo << endl;
    cout << "Valor Final: " << valorFinal << endl;
    cout << "Deletado: " << deletado << endl;
}

void calcularData(int dias, char _dataRetirada[], char _dataDevolucao[]) {
    int umDia = 24 * 60 * 60;

    time_t dataRetirada;
    time(&dataRetirada);
    char retiradaStr[80];
    tm * retirada = localtime(&dataRetirada);

    strftime(retiradaStr, 80, "%d/%m/%Y", retirada);

    strcpy(_dataRetirada, retiradaStr);


    time_t dataDevolucao;
    time(&dataDevolucao);
    char devolucaoStr[80];
    time_t novosDias = dataDevolucao + (dias * umDia);
    tm * devolucao = localtime(&novosDias);

    strftime(devolucaoStr, 80, "%d/%m/%Y", devolucao);

    strcpy(_dataDevolucao, devolucaoStr);
}

int clienteExiste(int codigoCliente) {
    int resposta = 0,pos, posicao;
    ClasseCliente molde;
    fstream fio;
    fio.open ("dados/clientes.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseCliente)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        if (molde.codigo == codigoCliente) {
            resposta = 1;
        }
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return resposta;
}

int veiculoExiste(int codigoVeiculo) {
    int resposta = 0,pos, posicao;
    ClasseVeiculo molde;
    fstream fio;
    fio.open ("dados/veiculos.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseVeiculo)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        if (molde.codigo == codigoVeiculo) {
            resposta = 1;
        }
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return resposta;
}

int precoDiaria(int codigoVeiculo) {
    int resposta = 0,pos, posicao;
    ClasseVeiculo molde;
    fstream fio;
    fio.open ("dados/veiculos.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseVeiculo)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        if (molde.codigo == codigoVeiculo) {
            resposta = molde.valor;
        }
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return resposta;
}

int ultimoCodigo() {
    int ultimo = 0,pos, posicao;
    ClasseLocacao molde;
    fstream fio;
    fio.open ("dados/locacoes.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseLocacao)))  // le do arquivo
    {
        pos = fio.tellp();
        pos = fio.tellg();
        ultimo = molde.codigoLocacao;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
    return ultimo;
}
