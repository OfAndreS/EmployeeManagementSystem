#include <iostream>
#include <vector>
#include <memory>

#include "ConsoleUI.hpp"

#include "FFactory.h"
#include "Funcionario.h"
#include "FDesenvolvedor.h" // Precisa incluir o header da classe derivada aqui!

void startMenu()
{
	std::vector<std::unique_ptr<EMSystem::Funcionario>> myEmployees;
	std::unique_ptr<EMSystem::Funcionario> novoFuncionario; 
	EMSystem::DataFlow myDataFlow;
	std::string userInput = "";
	
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
				novoFuncionario = myDataFlow.criarNovoFuncionario();
				novoFuncionario->exibirInformacoes();
				myEmployees.push_back(std::move(novoFuncionario));
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