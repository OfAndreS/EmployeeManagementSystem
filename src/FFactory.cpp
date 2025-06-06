#include "FFactory.h"

EMSystem::TipoCargo EMSystem::DataFlow::exibirMenuDeCargos() {
    int escolha = 0;
    std::cout << "\n| Selecione o cargo do Funcionario:\n";
    std::cout << "| 1. Desenvolvedor\n";
    std::cout << "| 2. Gerente (exemplo)\n";
    std::cout << "| Escolha: ";
    
    while (!(std::cin >> escolha) || (escolha != 1 && escolha != 2)) {
        std::cout << "| Escolha invalida. Tente novamente: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (escolha == 1) return TipoCargo::DESENVOLVEDOR;
    if (escolha == 2) return TipoCargo::GERENTE;

    return TipoCargo::DESENVOLVEDOR; 
}


std::unique_ptr<EMSystem::Funcionario> EMSystem::DataFlow::criarNovoFuncionario()
{
    std::string nome;
    int id;
    float salarioBase;

    printHead();
    std::cout << "|  CADASTRO DE NOVO FUNCIONARIO  |\n" << std::endl;
    
    inputAnStringToEMSystem("| Nome: ", nome); 
    inputAnNumberToEMSystem("| Id: ", id, 'I');
    inputAnNumberToEMSystem("| Salario Base: ", salarioBase, 'F');
    
    TipoCargo cargoEscolhido = exibirMenuDeCargos();

    switch (cargoEscolhido)
    {
        case TipoCargo::DESENVOLVEDOR:
        {
            int quantidadeDeProjetos;
            inputAnNumberToEMSystem("| Quantidade de projetos: ", quantidadeDeProjetos, 'I');
            return std::make_unique<FDesenvolvedor>(nome, id, salarioBase, quantidadeDeProjetos, TipoCargo::DESENVOLVEDOR);
        }

        case TipoCargo::GERENTE:
        {
            // int numeroDeSubordinados;
            // inputAnNumberToEMSystem("| Numero de Subordinados: ", numeroDeSubordinados, 'I');
            // return std::make_unique<FGerente>(nome, id, salarioBase, numeroDeSubordinados);
            std::cout << "Cargo de Gerente ainda nao implementado." << std::endl;
            return nullptr;
        }

        default:
            std::cout << "Cargo invalido selecionado." << std::endl;
            return nullptr;
    }
}