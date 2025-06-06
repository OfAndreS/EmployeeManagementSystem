    #include "ConsoleUI.hpp"

    bool EMSystem::itIsAnDigit(const std::string& tipo)
    {
        if(tipo.empty()) return false;
        for (char a : tipo)
        {
            if (!std::isdigit(a))
            {
                return false;
            }
        }
        return true;
    }

    bool EMSystem::inputAnStringToEMSystem(const std::string& prompt, std::string& value)
    {
        std::cout << prompt;

        std::string buffer;
        if (std::getline(std::cin, buffer)) 
        {
            if (buffer.empty()) {
                std::cout << "\n| AVISO: A entrada nao pode ser vazia.\n" << std::endl;
                return false; // Considera entrada vazia como falha.
            }
            value = buffer;
            return true; 
        }
        
        return false; 
    }

