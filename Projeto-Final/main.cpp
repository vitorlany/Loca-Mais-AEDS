#include <iostream>
#include <fstream>
#include <ctime>
#include <locale>

#include "ClasseCliente.h"
#include "ClasseVeiculo.h"
#include "ClasseLocacao.h"
#include "locacao-sistema.h"

using namespace std;

int main()
{
    setlocale( LC_ALL, "portuguese" );
    do {
        int opcao;
        cout << "=============================================" << endl;
        cout << "Menu LOCA MAIS" << endl;
        cout << "1 - Cadastrar um cliente" << endl;
        cout << "2 - Cadastrar um veículo" << endl;
        cout << "3 - Cadastrar uma locação" << endl; // Falta funcoes
        cout << "4 - Pagar locação" << endl; // Falta funcoes
        cout << "5 - Mostrar" << endl;
        cout << "   a) Clientes" << endl;
        cout << "   a) Veículos" << endl;
        cout << "6 - Locações do cliente" << endl;
        cout << "7 - Fidelidade" << endl;
        cout << "8 - Carro pelo valor" << endl;
        cout << "Escolha:  ";
        cin >> opcao;
        fflush(stdin);
        cout << "=============================================" << endl;
        switch (opcao) {
            case 1: {
                ClasseCliente cliente;
                cliente.criarCliente();
                salvarCliente(cliente);
                break;
            }
            case 2: {
                ClasseVeiculo veiculo;
                veiculo.criarVeiculo();
                salvarVeiculo(veiculo);
                break;
            }
            case 3: {
                ClasseLocacao locacao;
                locacao.criarLocacao();
                salvarLocacao(locacao);
            }
            case 4: {
                pagarLocacao();
                break;
            }
            case 5: {
                cout << "Clientes ======================================" << endl;
                mostrarClientes();
                cout << endl;
                cout << "Veiculos ======================================" << endl;
                mostrarVeiculos();
                cout << endl;
                break;
            }
            case 6: {
                locacoesDoCliente();
                break;
            }
            case 7: {
                calcularFidelidade();
                break;
            }
            case 8: {
                carroPorValor();
                break;
            }
        }
    }while(1);
    return 0;
}
