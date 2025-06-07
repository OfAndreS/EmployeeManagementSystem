#pragma once

#include <iostream>
#include <string>

#include "Funcionario.h"
#include "ConsoleUI.hpp"

namespace EMSystem
{
    class FGerente : public Funcionario
    {
        private:
            float bonusMensal;
        
        public:
        // // Construtor

            FGerente(std::string Nome, int Id, float SalarioBase, float bonusMensal, TipoCargo cargo);

            float calcularSalarioFinal();

            void exibirInformacoes();

            int getBonusMensal() const;

            void setBonusMensal(int quantidade);
    };
    
} // namespace EMSystem
