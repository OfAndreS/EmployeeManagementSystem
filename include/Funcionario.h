#pragma once

#include <iostream>
#include <string>

namespace EMSystem
{
    enum class TipoCargo { DESENVOLVEDOR, GERENTE, ANALISTA };

    class Funcionario
    {
        protected:

            std::string Nome;
            int Id;
            float SalarioBase;
            TipoCargo Cargo;

            Funcionario(std::string Nome, int Id, float SalarioBase, TipoCargo Cargo);

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
            
            TipoCargo getTipoCargo() const;
            
            // // Métodos
            
            virtual void exibirInformacoes();
    };
    
} // namespace EMSystem
