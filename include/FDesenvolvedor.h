#pragma once

#include <iostream>
#include <string>

#include "Funcionario.h"
#include "ConsoleUI.hpp"

namespace EMSystem
{
    class FDesenvolvedor : public Funcionario
    {
        private:
            int quantidadeDeProjetos;
        
        public:
        // // Construtor

            FDesenvolvedor(std::string Nome, int Id, float SalarioBase, int quantidadeDeProjetos, TipoCargo cargo);

            float calcularSalarioFinal();

            void exibirInformacoes();

            int getQuantidadeDeProjetos() const;

            void setQuantidadeDeProjetos(int quantidade);
    };
    
} // namespace EMSystem
