#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
class Livro
{
private :
    char titulo[50];
    char autor[50];
    int numreg;
    double preco;
public :
    void novoLivro();
    void alteraLivro();
    void imprimeLivro();
};
void Livro::novoLivro()
{
    cout << "\nDigite Titulo : ";
    fflush(stdin);
    gets(titulo);
    cout << "\nDigite Autor : ";
    fflush(stdin);
    gets(autor);
    cout << "\nDigite o Numero do Registro : ";
    cin >> numreg;
    cout << "\nDigite o Preco : ";
    cin >> preco;
}
void Livro::alteraLivro()
{
    cout << "\nDigite Titulo : "<<titulo;
    fflush(stdin);
    gets(titulo);
    cout << "\nDigite Autor : "<<autor;
    fflush(stdin);
    gets(autor);
    cout << "\nDigite o Numero do Registro : "<<numreg;
    cin >> numreg;
    cout << "\nDigite o Preco : "<<preco;
    cin >> preco;
}
void Livro::imprimeLivro()
{
    cout << "\nTitulo : " << titulo;
    cout << "\nAutor : " << autor;
    cout << "\nNumero do Registro : " << numreg;
    cout << "\nPreco : " << preco;
}
int main()
{
    long pos,posicao;
    long nrec;
    int op;
    Livro li; // cria objeto Livro
    string nomeArquivoExterno = "livros.dat";
    fstream fio; //fstream - leitura e escrita

    fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    if (fio.is_open())
    {
        pos = fio.tellp(); //- retorna a posição atual do apontador para escrita
        cout << "Posição atual no arquivo: " << pos << endl;
    }
    else
    {
        cout << "Erro na abertura do arquivo";
        cout << "\nabrindo arquivo para escrita\n";
        fio.open (nomeArquivoExterno, ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |
        fio.close();
        fio.open (nomeArquivoExterno, ios::in|ios::out); //abre para leitura e escrita (ios::out) (ios::in) ios::app |

    }


    do
    {
        fio.clear();
        cout <<"\nMenu \n1 - incluir \n 2- alterar \n 3 - listar \n 4 listar todos \n9 - finalizar!"<<endl;
        cin >> op;
        switch (op)
        {
        case 1:
            li.novoLivro();
            fio.seekp(0,ios::end);
            fio.write((char *)&li, sizeof(Livro)); // grava no arquivo
            fio.flush();
            break;
        case 2:
            cout <<"informe o registro a ser alterado\n";
            cin >> nrec;
            if (nrec>0)
            {
                posicao = (nrec-1)*sizeof(Livro); // calcula posição
                fio.seekg(posicao,ios::beg); // posiciona no registro solicitado
                fio.read((char *)&li, sizeof(Livro)); // lê do arquivo
                li.alteraLivro();
                posicao = (nrec-1)*sizeof(Livro); // calcula posição
                fio.seekp(posicao,ios::beg); // posiciona no registro solicitado para gravar
                fio.write((char *)&li, sizeof(Livro)); // grava no arquivo
                fio.flush();
            }
            break;
        case 3:
            cout <<"informe o registro a ser listado\n";
            cin >> nrec;
            if (nrec>0)
            {
                posicao = (nrec-1)*sizeof(Livro); // calcula posição
                fio.seekg(posicao,ios::beg); // posiciona no registro solicitado
                fio.read((char *)&li, sizeof(Livro));
                li.imprimeLivro();
            }
            break;
        case 4:
            cout <<"\n******impressao do arquivo \n";
            fio.clear();
            fio.seekg(0,ios::beg); //coloca ponteiro no inicio do arquivo
            while (fio.read ((char *)&li,sizeof(Livro)))  // le do arquivo
            {
                pos = fio.tellp();
                cout << "\nPosição atual loop no arquivo P: " << pos << endl;
                pos = fio.tellg();
                cout << "\nPosição atual loop no arquivo G: " << pos << endl;
                li.imprimeLivro(); // imprime no vídeo
            }
            fio.clear(); // limpa "eof = final de arquivo" para proximo uso
            break;
        }
    }while (op!=9);

    fio.close();
}
