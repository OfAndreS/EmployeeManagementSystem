#include "FDesenvolvedor.h"

EMSystem::FDesenvolvedor::FDesenvolvedor(std::string Nome, int Id, float SalarioBase, int quantidadeDeProjetos, TipoCargo Cargo) : Funcionario(Nome, Id, SalarioBase, Cargo), quantidadeDeProjetos(quantidadeDeProjetos)
{}

float EMSystem::FDesenvolvedor::calcularSalarioFinal()
{
    float salarioFinal = this->getSalarioBase() + (500 * quantidadeDeProjetos);

    return salarioFinal;
}

void EMSystem::FDesenvolvedor::exibirInformacoes()
{
    std::cout << "| Cargo: Desenvolvedor | Nome: " << getNome() << " | ID: " << getId() << " | Salario Base: " << getSalarioBase() << "| Quantidade de projetos: " << getQuantidadeDeProjetos() << " | Salario Final: " << calcularSalarioFinal() << std::endl;   
}

int EMSystem::FDesenvolvedor::getQuantidadeDeProjetos() const
{
    return this->quantidadeDeProjetos;
}

void EMSystem::FDesenvolvedor::setQuantidadeDeProjetos(int quantidade)
{
    this->quantidadeDeProjetos = quantidade;
}
