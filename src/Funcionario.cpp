#include "Funcionario.h"

//Seterrs

void EMSystem::Funcionario::setSalarioBase(float SalarioBase)
{
    this->SalarioBase = SalarioBase;
}

void EMSystem::Funcionario::setNome(std::string nome)
{
    this->Nome = nome;
}

void EMSystem::Funcionario::setId(int id)
{
    this->Id = id;
}

//Geterrs

std::string EMSystem::Funcionario::getNome() const
{
    return this->Nome;
}

int EMSystem::Funcionario::getId() const
{
    return this->Id;
}

float EMSystem::Funcionario::getSalarioBase() const
{
    return this->SalarioBase;
}

// // Métodos

void EMSystem::Funcionario::exibirInformacoes()
{
    std::cout << "| Nome: " << Nome << std::endl;
    std::cout << "| ID: " << Id << std::endl;
    std::cout << "| Salário Base: " << SalarioBase << std::endl;
}