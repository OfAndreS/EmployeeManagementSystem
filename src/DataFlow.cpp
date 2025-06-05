#include "DataFlow.h"

void EMSystem::DataFlow::startFlow()
{
    EMSystem::printHead();
    
    std::cout << "| Nome do Funcionario: ";
    std::getline(std::cin, this->Nome);
    std::cout << "| Id do Funcionario: ";
    std::cin >> this->Id;
    std::cout << "| Salario Base do Funcionario: ";
    std::cin >> this->SalarioBase;
}

void EMSystem::DataFlow::FDesenvolvedorFlow()
{

    int qdp;
    std::cout << "| Quantidade de projetos do Funcionario: ";
    std::cin >> qdp;

    EMSystem::FDesenvolvedor myDev(this->Nome,this->Id, this->SalarioBase, qdp);
    myDev.exibirInformacoes();
}