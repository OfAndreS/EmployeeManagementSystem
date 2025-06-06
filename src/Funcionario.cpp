#include "Funcionario.h"

EMSystem::Funcionario::Funcionario(std::string Nome, int Id, float SalarioBase, TipoCargo Cargo) : Nome(Nome), Id(Id), SalarioBase(SalarioBase), Cargo(Cargo)
{}

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

EMSystem::TipoCargo EMSystem::Funcionario::getTipoCargo() const
{
    return this->Cargo;
}

// // Métodos

void EMSystem::Funcionario::exibirInformacoes()
{
    std::cout << "| Nome: " << Nome << std::endl;
    std::cout << "| ID: " << Id << std::endl;
    std::cout << "| Salário Base: " << SalarioBase << std::endl;
}