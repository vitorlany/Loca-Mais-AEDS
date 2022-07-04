#ifndef LOCACAO-SISTEMA_H_INCLUDED
#define LOCACAO-SISTEMA_H_INCLUDED

void salvarCliente(ClasseCliente cliente);
void salvarLocacao(ClasseLocacao locacao);
void salvarVeiculo(ClasseVeiculo veiculo);

void alterarVeiculo();

void mostrarClientes();
void mostrarVeiculos();
void mostrarLocacao();

void locacoesDoCliente();
void calcularFidelidade();
void pagarLocacao();
#endif // LOCACAO-SISTEMA_H_INCLUDED
