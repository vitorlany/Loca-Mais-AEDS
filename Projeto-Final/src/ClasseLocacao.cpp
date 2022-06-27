#include "ClasseLocacao.h"

int proximoCodigoLocacao = 0;

ClasseLocacao::ClasseLocacao(string _dataRetirada, string _dataDevolucao, int _seguro, int _dias, int _codigoCliete, int _codigoVeiculo)
{
    codigoLocacao = proximoCodigoLocacao++;
    dataRetirada = _dataRetirada;
    dataDevolucao = _dataDevolucao;
    seguro = _seguro;
    dias = _dias;
    codigoCliete = _codigoCliete;
    codigoVeiculo = _codigoVeiculo;
}
