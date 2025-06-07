#pragma once

#include <iostream>
#include <string>
#include <limits>

namespace EMSystem
{
    // // Declaração

    bool itIsAnDigit(const std::string& tipo);

    bool inputAnStringToEMSystem(const std::string& prompt, std::string& value);


    // // Implementação

    inline void printDollarLogo()
    {
        std::cout << "$$$$$$$$\\ $$\\      $$\\  $$$$$$\\                        $$\\                             \n";
        std::cout << "$$  _____|$$$\\    $$$ |$$  __$$\\                       $$ |                            \n";
        std::cout << "$$ |      $$$$\\  $$$$ |$$ /  \\__|$$\\   $$\\  $$$$$$$\\ $$$$$$\\    $$$$$$\\  $$$$$$\\$$\\  \n";
        std::cout << "$$$$$\\    $$\\$$\\$$ $$ |\\$$$$$$\\  $$ |  $$ |$$  _____|\\_$$  _|  $$  __$$\\ $$  _$$  _$$\\ \n";
        std::cout << "$$  __|   $$ \\$$$  $$ | \\____$$\\ $$ |  $$ |\\$$$$$$\\    $$ |    $$$$$$$$ |$$ / $$ / $$ |\n";
        std::cout << "$$ |      $$ |\\$  /$$ |$$\\   $$ |$$ |  $$ | \\____$$\\   $$ |$$\\ $$   ____|$$ | $$ | $$ |\n";
        std::cout << "$$$$$$$$\\ $$ | \\_/ $$ |\\$$$$$$  |\\$$$$$$$ |$$$$$$$  |  \\$$$$  |\\$$$$$$$\\ $$ | $$ | $$ |\n";
        std::cout << "\\________|\\__|     \\__| \\______/  \\____$$ |\\_______/    \\____/  \\_______|\\__| \\__| \\__|\n";
        std::cout << "                                 $$\\   $$ |                                            \n";
        std::cout << "                                 \\$$$$$$  |                                            \n";
        std::cout << "                                  \\______/                                             \n";
    }

    inline void printHead()
    {
        std::cout << "\n\n|  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n\n" << std::endl;
    }

    inline void printMenu()
    {
        std::cout << "| MENU \n|\n| ( 1 ) - Criar novo Funcionario \n| ( 2 ) - Deletar Funcionario \n| ( 3 ) - Exibir todos os funcionarios \n| ( 0 ) - Encerrar \n"; 
    }

    template<typename T>
    bool inputAnNumberToEMSystem(const std::string& prompt, T& value, char type) 
    {
        std::string userInput;

        while (true) 
        {
            std::cout << prompt;
            std::cin >> userInput;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            if (itIsAnDigit(userInput)) 
            {
                if (toupper(type) == 'I') 
                {
                    value = std::stoi(userInput);
                } 
                else if (toupper(type) == 'F') 
                {
                    value = std::stof(userInput);
                }
                return true;
            } 
            else 
            {
                std::cout << "\n| ERROR: Entrada invalida. Por favor, insira apenas numeros.\n" << std::endl;
            }
        }
    }

} // namespace EMSystem
