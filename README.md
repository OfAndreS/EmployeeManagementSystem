# Employee Management System

O **Employee Management System** é um sistema de console para o gerenciamento de funcionários, implementado em C++. O projeto utiliza princípios de Programação Orientada a Objetos (POO) para criar, deletar e visualizar informações de diferentes tipos de funcionários, como Desenvolvedores, Gerentes e Estagiários. O sistema é flexível, escalável e fácil de usar, com uma interface de linha de comando clara e interativa.

## Funcionalidades

**Criação de Funcionários**: 
- Adicione novos funcionários ao sistema, escolhendo entre diferentes cargos (Desenvolvedor, Gerente, Estagiário) e inserindo informações específicas para cada um.

**Exclusão de Funcionários**: 
- Remova funcionários do sistema de forma segura.

**Visualização de Funcionários**: 
- Liste todos os funcionários cadastrados com suas respectivas informações detalhadas.

**Cálculo de Salário**: 
- Cada tipo de funcionário possui uma lógica específica para o cálculo do salário final, se utilizando do polimorfismo.

**Interface de Console**: 
- Uma interface de usuário no console para facilitar a navegação e a utilização do sistema.

![image](https://github.com/user-attachments/assets/1c4e571c-866b-4928-a60b-7d07c6ee0b4e)


## Tecnologias e Conceitos Utilizados

**C++17**: 
- linguagem C++.

**Programação Orientada a Objetos (POO)**:

- **Herança**: 
  - A classe base `Funcionario` é herdada pelas classes filhas `FDesenvolvedor`, `FGerente` e `FEstagiario`.
  
- **Polimorfismo**: 
  - A função `calcularSalarioFinal()` é virtual e implementada de forma diferente em cada classe filha.
  
- **Encapsulamento**: 
  - Os dados dos funcionários são protegidos e acessados através de métodos `getters` e `setters`.
  
- **Factory Pattern**: 
  - A classe `FFactory` é responsável por criar instâncias de diferentes tipos de funcionários, centralizando a lógica de criação de objetos.
  
- **Ponteiros Inteligentes (`std::unique_ptr`)**: 
  - Para gerenciamento automático de memória.

**Templates**: 
- Para a criação de funções de entrada de dados genéricas.

**CMake**: 
- Para a automação do processo de compilação.

## 📁 Estrutura do Projeto

O projeto está organizado da seguinte forma:

```
.
├── include/
│   ├── ConsoleUI.hpp
│   ├── FDesenvolvedor.h
│   ├── FEstagiario.h
│   ├── FFactory.h
│   ├── FGerente.h
│   └── Funcionario.h
├── src/
│   ├── EMSystem.cpp
│   ├── FFactory.cpp
│   └── Funcionario.cpp
|   └── FGerente.cpp
|   └── FEstagiario.cpp
|   └── FDesenvolvedor.cpp
|   └── ConsoleUI.cpp
└── Cmakelists.txt
```

### Principais Arquivos:

**`EMSystem.cpp`**: 
- Contém a função `main` e o loop principal do programa, gerenciando a interação com o usuário.

**`Funcionario.h` / `Funcionario.cpp`**: 
- Define a classe base abstrata `Funcionario`, com os atributos e métodos comuns a todos os funcionários.

**`FDesenvolvedor.h`**, **`FGerente.h`**, **`FEstagiario.h`**: 
- Definições das classes que herdam de `Funcionario` e representam os diferentes cargos.

**`FFactory.h` / `FFactory.cpp`**: 
- Implementação do Factory Pattern para a criação de objetos `Funcionario`.

**`ConsoleUI.hpp`**: 
- Funções auxiliares para a interface do console, como menus e logos.

**`Cmakelists.txt`**: 
- Arquivo de configuração do CMake para a compilação do projeto. [cite: 1]

## Como Compilar e Executar

### Pré-requisitos

- **Compilador C++17**: (GCC, Clang, MSVC, etc.)
- [cite_start]**CMake**: Versão 3.13 ou superior [cite: 1]

### Passos para Compilação

1. **Clone o repositório:**
   ```bash
   git clone <URL_DO_REPOSITORIO>
   cd <NOME_DA_PASTA_DO_PROJETO>
   ```

2. **Crie uma pasta para a compilação e entre nela:**
   ```bash
   mkdir build
   cd build
   ```

3. **Execute o CMake para gerar os arquivos de compilação:**
   ```bash
   cmake ..
   ```

4. **Compile o projeto:**
   - No **Linux** ou **macOS**:
     ```bash
     make
     ```
   - No **Windows** (com Visual Studio, por exemplo):
     ```bash
     cmake --build .
     ```

### Execução

Após a compilação, o executável estará na pasta `build`.

- No **Linux** ou **macOS**:
  ```bash
  ./EmployeeManagementSystem
  ```
- No **Windows**:
  ```bash
  .\EmployeeManagementSystem.exe
  ```
