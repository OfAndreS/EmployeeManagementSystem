#pragma once

#include <iostream>
#include <string>
#include <memory>

#include "Funcionario.h" // Apenas a base é necessária aqui
// Não precisa mais de FDesenvolvedor.h

namespace EMSystem
{

    class DataFlow
    {
    public:
        // Função que retorna um ponteiro para a classe BASE
        std::unique_ptr<Funcionario> criarNovoFuncionario();

    private:
        // Função auxiliar para mostrar o menu e obter a escolha do usuário
        TipoCargo exibirMenuDeCargos();
    };
    
}