#include "FGerente.h"

EMSystem::FGerente::FGerente(std::string Nome, int Id, float SalarioBase, float bonusMensal, TipoCargo Cargo) : Funcionario(Nome, Id, SalarioBase, Cargo), bonusMensal(bonusMensal)
{}

float EMSystem::FGerente::calcularSalarioFinal()
{
    float salarioFinal = this->getSalarioBase() + bonusMensal;

    return salarioFinal;
}

void EMSystem::FGerente::exibirInformacoes()
{
    std::cout << "| Cargo: Gerente | Nome: " << getNome() << " | ID: " << getId() << " | Salario Base: " << getSalarioBase() << " R$ " << "| Bonus Mensal: " << getBonusMensal() << " | Salario Final: " << calcularSalarioFinal() << " R$ " << std::endl;   
}

int EMSystem::FGerente::getBonusMensal() const
{
    return this->bonusMensal;
}

void EMSystem::FGerente::setBonusMensal(int quantidade)
{
    this->bonusMensal = quantidade;
}
