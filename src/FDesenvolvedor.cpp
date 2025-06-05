#include "FDesenvolvedor.h"

EMSystem::FDesenvolvedor::FDesenvolvedor(std::string Nome, int Id, float SalarioBase, int quantidadeDeProjetos) : quantidadeDeProjetos(quantidadeDeProjetos)

{
    setSalarioBase(SalarioBase);
    setNome(Nome);
    setId(Id);
}

float EMSystem::FDesenvolvedor::calcularSalarioFinal()
{
    float salarioFinal = this->getSalarioBase() + (500 * quantidadeDeProjetos);

    return salarioFinal;
}

void EMSystem::FDesenvolvedor::exibirInformacoes()
{
    EMSystem::printHead();

    std::cout << "| DEV INFO: \n|\n| Nome: " << getNome() << "\n| ID: " << getId() << "\n| Salario Base: " << getSalarioBase() << " R$ " << "\n| Salario Final: " << calcularSalarioFinal() << " R$ " << std::endl;
    
    EMSystem::printHead();
}
