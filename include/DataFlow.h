#pragma once

#include <iostream>
#include <string>

#include "FDesenvolvedor.h"
#include "Funcionario.h"
#include "utility.hpp"

namespace EMSystem
{
    class DataFlow
    {
        private:
            float SalarioBase;
            std::string Nome;
            int Id;
        
        public:

            void startFlow();

            void FDesenvolvedorFlow();

    };
    
} 