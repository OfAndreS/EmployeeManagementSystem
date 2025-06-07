#include <iostream>
#include <vector>
#include <memory>

#include "ConsoleUI.hpp"

#include "FFactory.h"
#include "Funcionario.h"
#include "FDesenvolvedor.h" 
#include "FGerente.h"
#include "FEstagiario.h"

void startMenu()
{
	std::vector<std::unique_ptr<EMSystem::Funcionario>> myEmployees;
	std::unique_ptr<EMSystem::Funcionario> novoFuncionario; 
	EMSystem::FFactory myFactory;
	std::string userInput = "";

	EMSystem::printHead();

	EMSystem::printDollarLogo();
	
	while (true)
	{
		EMSystem::printHead();
		EMSystem::printMenu();
		EMSystem::inputAnStringToEMSystem("| Escolha: ", userInput);
		if (!userInput.empty() && userInput.size() == 1)
		{
			switch (userInput.at(0))
			{
			case '1':

				novoFuncionario = myFactory.criarNovoFuncionario();

				EMSystem::printHead();
				novoFuncionario->exibirInformacoes();

				myEmployees.push_back(std::move(novoFuncionario));

				break;
			case '2':

				EMSystem::printHead();
				myFactory.deleteOneEmployeer(myEmployees);

				break;
			case '3':

				EMSystem::printHead();
				myFactory.showAllEmployeers(myEmployees);

				break;
			case '0':
				std::cout << "\n| Finalizando... " << std::endl;
				return;

			default:
				std::cout << "| Entrada incorreta" << std::endl;
				break;
			}
		}
	}
	
}

int main()
{
	startMenu();
	return 0;
}