#pragma once

#include <iostream>
#include <string>
#include <limits>

namespace EMSystem
{

    inline void printHead()
    {
        std::cout << "\n\n|  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n\n" << std::endl;
    }
    
    bool itIsAnDigit(const std::string& tipo);

    bool inputAnStringToEMSystem(const std::string& prompt, std::string& value);

    template<typename T>
    bool inputAnNumberToEMSystem(const std::string& prompt, T& value, char type) 
    {
        std::string userInput;

        while (true) 
        {
            std::cout << prompt;
            std::cin >> userInput;

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
                break;
            }
        }
    }

} // namespace EMSystem
