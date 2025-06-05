#pragma once

#include <iostream>
#include <string>

#include "Funcionario.h"
#include "utility.hpp"

namespace EMSystem
{
    class FDesenvolvedor : public Funcionario
    {
        private:
            int quantidadeDeProjetos;

        public:
            // // Construtor

            FDesenvolvedor(std::string Nome, int Id, float SalarioBase, int quantidadeDeProjetos);

            float calcularSalarioFinal();

            void exibirInformacoes();

    };
    
} // namespace EMSystem
