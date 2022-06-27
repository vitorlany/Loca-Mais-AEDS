#include "ClasseVeiculo.h"

int proximoCodigoVeiculo = 0;

ClasseVeiculo::ClasseVeiculo(string _descricao, string _modelo, string _cor, string _placa, int _valor, int _ocupantes)
{
    codigo = proximoCodigoVeiculo++;
    descricao = _descricao;
    modelo = _modelo;
    cor = _cor;
    placa = _placa;
    valor = _valor;
    ocupantes = _ocupantes;
}
