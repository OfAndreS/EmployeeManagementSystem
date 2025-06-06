#include "DataFlow.h"

void EMSystem::DataFlow::startFlow()
{
    int couter = 0;
    std::string userInput;
    
    EMSystem::printHead();

    while (true)
    {
        switch (couter)
        {
        case 0:
            if (EMSystem::inputAnStringToEMSystem("| Nome do Funcionario: ", this->Nome)) couter++;
            break;

        case 1:
            if (EMSystem::inputAnNumberToEMSystem("| Id do Funcionario: ", this->Id, 'I')) couter++;
            break;

        case 2:            
            if (EMSystem::inputAnNumberToEMSystem("| Salario Base do Funcionario: ", this->SalarioBase, 'F')) couter++;
            break;

        case 3:
            return;
        }
    }
    
}

void EMSystem::DataFlow::FDesenvolvedorFlow()
{
    int qdp;

    EMSystem::inputAnNumberToEMSystem("| Quantidade de projetos do Funcionario: ", qdp, 'I');
    EMSystem::FDesenvolvedor myDev(this->Nome,this->Id, this->SalarioBase, qdp);
    myDev.exibirInformacoes();
}