#include "FEstagiario.h"

EMSystem::FEstagiario::FEstagiario(std::string Nome, int Id, float SalarioBase, int horasTrabalhadas, TipoCargo Cargo) : Funcionario(Nome, Id, SalarioBase, Cargo), horasTrabalhadas(horasTrabalhadas)
{}

float EMSystem::FEstagiario::calcularSalarioFinal()
{
    float salarioFinal = this->getSalarioBase() * (horasTrabalhadas / 160);

    return salarioFinal;
}

void EMSystem::FEstagiario::exibirInformacoes()
{
    std::cout << "| Cargo: Estagiario | Nome: " << getNome() << " | ID: " << getId() << " | Salario Base: " << getSalarioBase() << " R$ " << "| Horas Trabalhadas: " << getHorasTrabalhadas() << " | Salario Final: " << calcularSalarioFinal() << " R$ " << std::endl;   
}

int EMSystem::FEstagiario::getHorasTrabalhadas() const
{
    return this->horasTrabalhadas;
}

void EMSystem::FEstagiario::setHorasTrabalhadas(int quantidade)
{
    this->horasTrabalhadas = quantidade;
}
