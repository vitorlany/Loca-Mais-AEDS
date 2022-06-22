#include <iostream>

using namespace std;

class ClasseCliente {
    public:
        int codigo;
        string nome;
        int telefone;
        int deletada = 0;
        class endereco {
            public:
                string rua;
                int numero;
                int cep;
        };
};

int main()
{
    ClasseCliente Cliente;

    Cliente.nome = "Raul Fernandes";
    Cliente.codigo = 123;

    cout << Cliente.codigo << endl << Cliente.nome << endl << Cliente.deletada;
    return 0;
}
