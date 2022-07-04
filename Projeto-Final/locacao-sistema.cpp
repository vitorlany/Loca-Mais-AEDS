#include <iostream>
#include <fstream>

#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include "ClasseLocacao.h"

// Salvar dados
void salvarCliente(ClasseCliente cliente) {
    fstream fio;
    long pos;
    string nomeArquivoExterno="dados/clientes.dat";
    fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    if (fio.is_open()) {
        pos = fio.tellp(); //- retorna a posição atual do apontador para escrita
        //cout << "Posição atual no arquivo: " << pos << endl;
    } else {
        cout << "Erro na abertura do arquivo";
        cout << "\nabrindo arquivo para escrita\n";
        fio.open (nomeArquivoExterno, ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
        fio.close();
        fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    }

    fio.seekp(0,ios::end);
    fio.write((char *)&cliente, sizeof(ClasseCliente)); // grava no arquivo
    fio.flush();
    fio.close();
}

void salvarLocacao(ClasseLocacao locacao) {
    fstream fio;
    long pos;
    string nomeArquivoExterno="dados/locacoes.dat";
    fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    if (fio.is_open()) {
        pos = fio.tellp(); //- retorna a posição atual do apontador para escrita
        //cout << "Posição atual no arquivo: " << pos << endl;
    } else {
        cout << "Erro na abertura do arquivo";
        cout << "\nabrindo arquivo para escrita\n";
        fio.open (nomeArquivoExterno, ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
        fio.close();
        fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    }

    fio.seekp(0,ios::end);
    fio.write((char *)&locacao, sizeof(ClasseLocacao)); // grava no arquivo
    fio.flush();
    fio.close();
}

void salvarVeiculo(ClasseVeiculo veiculo) {
    fstream fio;
    long pos;
    string nomeArquivoExterno="dados/veiculos.dat";
    fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    if (fio.is_open()) {
        pos = fio.tellp(); //- retorna a posição atual do apontador para escrita
        //cout << "Posição atual no arquivo: " << pos << endl;
    } else {
        cout << "Erro na abertura do arquivo";
        cout << "\nabrindo arquivo para escrita\n";
        fio.open (nomeArquivoExterno, ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
        fio.close();
        fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    }

    fio.seekp(0,ios::end);
    fio.write((char *)&veiculo, sizeof(ClasseVeiculo)); // grava no arquivo
    fio.flush();
    fio.close();
}

// Alterar dados
void alterarVeiculo() {
    int nrec, posicao;
    fstream fio;
    ClasseVeiculo molde;
    fio.open ("dados/veiculos.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    cout <<"informe o registro a ser alterado: ";
    cin >> nrec;
    cout << endl;
    if (nrec>0)
    {
        posicao = (nrec-1)*sizeof(ClasseVeiculo); // calcula posição
        fio.seekg(posicao,ios::beg); // posiciona no registro solicitado
        fio.read((char *)&molde, sizeof(ClasseVeiculo)); // lê do arquivo

        cout << molde.cor << endl;

        molde.alterarVeiculo(); // criar esse metodo

       /* posicao = (nrec-1)*sizeof(ClasseVeiculo); // calcula posição
        fio.seekp(posicao,ios::beg); // posiciona no registro solicitado para gravar
        fio.write((char *)&molde, sizeof(ClasseVeiculo)); // grava no arquivo
        fio.flush();*/
    }
    fio.close();
}

void mostrarVeiculos() {
    int pos, posicao;
    ClasseVeiculo molde;
    fstream fio;
    fio.open ("dados/veiculos.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseVeiculo)))  // le do arquivo
    {
        pos = fio.tellp();
        //cout << "\nPosição atual loop no arquivo P: " << pos << endl;
        pos = fio.tellg();
        //cout << "\nPosição atual loop no arquivo G: " << pos << endl;
        molde.dadosVeiculo(); // imprime no vídeo
        cout << endl;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
}

void mostrarClientes() {
    int pos, posicao;
    ClasseCliente molde;
    fstream fio;
    fio.open ("dados/clientes.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseCliente)))  // le do arquivo
    {
        pos = fio.tellp();
        //cout << "\nPosição atual loop no arquivo P: " << pos << endl;
        pos = fio.tellg();
        //cout << "\nPosição atual loop no arquivo G: " << pos << endl;
        molde.dadosCliente(); // imprime no vídeo
        cout << endl;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
}

void mostrarLocacao() {
    int pos, posicao;
    ClasseLocacao molde;
    fstream fio;
    fio.open ("dados/locacoes.dat", ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
    fio.clear();
    fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
    while (fio.read ((char *)&molde,sizeof(ClasseLocacao)))  // le do arquivo
    {
        pos = fio.tellp();
        //cout << "\nPosição atual loop no arquivo P: " << pos << endl;
        pos = fio.tellg();
        //cout << "\nPosição atual loop no arquivo G: " << pos << endl;
        molde.dadosLocacao(); // imprime no vídeo
        cout << endl;
    }
    fio.clear(); // limpa "eof = final de arquivo" para proximo uso
    fio.close();
}

using namespace std;

