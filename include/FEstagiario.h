#pragma once

#include <iostream>
#include <string>

#include "Funcionario.h"
#include "ConsoleUI.hpp"

namespace EMSystem
{
    class FEstagiario : public Funcionario
    {
        private:
            int horasTrabalhadas;
        
        public:
        // // Construtor

            FEstagiario(std::string Nome, int Id, float SalarioBase, int horasTrabalhadas, TipoCargo cargo);

            float calcularSalarioFinal();

            void exibirInformacoes();

            int getHorasTrabalhadas() const;

            void setHorasTrabalhadas(int quantidade);
    };
    
} // namespace EMSystem
