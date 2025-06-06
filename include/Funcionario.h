#pragma once

#include <iostream>
#include <string>

namespace EMSystem
{
    class Funcionario
    {
        protected:

            std::string Nome;
            int Id;

            float SalarioBase;

            Funcionario(std::string Nome, int Id, float SalarioBase);

            // // Seterrs 

            void setSalarioBase(float SalarioBase);

            void setNome(std::string nome);

            void setId(int id);

            // // Métodos

            virtual float calcularSalarioFinal() = 0;

        public:

            // // Geterrs

            std::string getNome() const;

            int getId() const;

            float getSalarioBase() const;

            // // Métodos

            virtual void exibirInformacoes();
    };
    
} // namespace EMSystem
