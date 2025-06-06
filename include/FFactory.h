#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Funcionario.h" 
#include "FDesenvolvedor.h" 
// #include "FGerente.h"    // Futuramente, incluiria outras

#include <memory>
#include <limits>

namespace EMSystem
{

    class FFactory
    {
    private:

        TipoCargo exibirMenuDeCargos();
        
    public:
        // Função que retorna um ponteiro para a classe BASE
        std::unique_ptr<Funcionario> criarNovoFuncionario();

        void showAllEmployeers(std::vector<std::unique_ptr<EMSystem::Funcionario>>& deleteEmployees);

    };
    
}