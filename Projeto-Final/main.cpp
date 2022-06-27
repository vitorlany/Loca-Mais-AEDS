#include <iostream>
#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include "ClasseLocacao.h"

using namespace std;

int main()
{
ClasseCliente cliente("Raul", "Rua teste", 456, 234, 1111);
    ClasseVeiculo carro("SUV", "BMW X6", "Preto", "DEF-5678", 80, 4);

    ClasseLocacao locacao("01-01-2022", "05-05-2022", 1, 5, cliente.codigo, carro.codigo);

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
    return 0;
}
