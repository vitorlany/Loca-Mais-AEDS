#include "ClasseCliente.h"

int proximoCodigoCliente = 0;

ClasseCliente::ClasseCliente(string _nome, string _rua, int _numero, int _cep, int _telefone)
{
    codigo = proximoCodigoCliente++;
    nome = _nome;
    endereco.rua = _rua;
    endereco.numero = _numero;
    endereco.cep = _cep;
    telefone = _telefone;
}
