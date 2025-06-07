#include "FFactory.h"

EMSystem::TipoCargo EMSystem::FFactory::exibirMenuDeCargos() {
    int escolha = 0;
    std::cout << "\n| Selecione o cargo do Funcionario:\n";
    std::cout << "\n|\n| ( 1 ) - Desenvolvedor\n";
    std::cout << "| ( 2 ) - Gerente\n";
    std::cout << "| ( 3 ) - Estagiario\n";
    std::cout << "| Escolha: ";
    
    while (!(std::cin >> escolha) || (escolha != 1 && escolha != 2 && escolha != 3)) {
        std::cout << "| Escolha invalida. Tente novamente: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (escolha == 1) return TipoCargo::DESENVOLVEDOR;
    if (escolha == 2) return TipoCargo::GERENTE;
    if (escolha == 3) return TipoCargo::ESTAGIARIO;

    return TipoCargo::DESENVOLVEDOR; 
}

std::unique_ptr<EMSystem::Funcionario> EMSystem::FFactory::criarNovoFuncionario()
{
    std::string nome;
    int id;
    float salarioBase;

    EMSystem::printHead();
    std::cout << "|  CADASTRO DE NOVO FUNCIONARIO  |\n" << std::endl;
    
    EMSystem::inputAnStringToEMSystem("| Nome: ", nome); 
    EMSystem::inputAnNumberToEMSystem("| Id: ", id, 'I');
    EMSystem::inputAnNumberToEMSystem("| Salario Base: ", salarioBase, 'F');
    
    TipoCargo cargoEscolhido = exibirMenuDeCargos();

    switch (cargoEscolhido)
    {
        case TipoCargo::DESENVOLVEDOR:
        {
            int quantidadeDeProjetos;
            EMSystem::inputAnNumberToEMSystem("| Quantidade de projetos: ", quantidadeDeProjetos, 'I');
            return std::make_unique<FDesenvolvedor>(nome, id, salarioBase, quantidadeDeProjetos, TipoCargo::DESENVOLVEDOR);
        }
        case TipoCargo::GERENTE:
        {
            float BonusMensal;
            inputAnNumberToEMSystem("| Bonus Mensal: ", BonusMensal, 'F');
            return std::make_unique<FGerente>(nome, id, salarioBase, BonusMensal, TipoCargo::GERENTE);
        }
        case TipoCargo::ESTAGIARIO:
        {
            float horasTrabalhadas;
            inputAnNumberToEMSystem("| Horas Trabalhadas: ", horasTrabalhadas, 'I');
            return std::make_unique<FEstagiario>(nome, id, salarioBase, horasTrabalhadas, TipoCargo::ESTAGIARIO);
        }
        default:
            std::cout << "Cargo invalido selecionado." << std::endl;
            return nullptr;
    }
}

void EMSystem::FFactory::showAllEmployeers(std::vector<std::unique_ptr<EMSystem::Funcionario>>& showEmployeers)
{
    int couter = 0;

    if (showEmployeers.empty())
    {
        std::cout << "| Lita de Funcionarios vazia" << std::endl; 
        return;
    }
    else
    {
        for (const auto& myF : showEmployeers)
        {
            std::cout << " ( " << couter << " ) - ";
            myF->exibirInformacoes();
            couter++;
        }
    }

}

void EMSystem::FFactory::deleteOneEmployeer(std::vector<std::unique_ptr<EMSystem::Funcionario>>& deleteEmployee)
{
    int userInput;

    if (deleteEmployee.empty())
    {
        std::cout << "| Lita de Funcionarios vazia" << std::endl; 
        return;
    }
    else
    {
        EMSystem::FFactory::showAllEmployeers(deleteEmployee);
    
        while (true)
        {
            EMSystem::inputAnNumberToEMSystem("\n| Digite o numero: ", userInput, 'I');
            
            if (userInput < 0 || userInput >= deleteEmployee.size())
            {
                std::cout << "| Quantitade invalida " << std::endl; 
            }
            else
            {
                break;
            }
        }
        
        for (int i = 0; i < deleteEmployee.size(); i++)
        {
            if (i == userInput)
            {
                deleteEmployee.erase(deleteEmployee.begin() + i);
                return;
            }
        }
    }
}