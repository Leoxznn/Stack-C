# Gerenciador de Stack de Processos
Um sistema simples e eficiente para gerenciamento de processos utilizando estrutura de dados Stack (Pilha), implementado em C.
## 📋 Descrição
Este projeto implementa um gerenciador de processos utilizando uma estrutura de dados Stack (Pilha), onde cada processo é caracterizado por um PID (Process ID) e um nome. O sistema oferece uma interface via console para manipulação dos processos na stack.
## ✨ Funcionalidades
- Adicionar novo processo à stack
- Remover processo do topo da stack
- Visualizar todos os processos
- Verificar se a stack está vazia
- Limpar toda a stack

## 🚀 Como Executar
### Pré-requisitos
- Compilador C (GCC recomendado)
- CMake (versão 3.31 ou superior)
- Sistema operacional compatível (Windows, Linux ou macOS)

### Compilação
1. Clone o repositório:
``` bash
git clone https://github.com/seu-usuario/gerenciador-stack-processos.git
```
1. Entre no diretório do projeto:
``` bash
cd gerenciador-stack-processos
```
1. Crie um diretório para build e entre nele:
``` bash
mkdir build && cd build
```
1. Execute o CMake e compile:
``` bash
cmake ..
cmake --build .
```
### Execução
Após a compilação, execute o programa:
``` bash
./Stack
```
## 🎮 Como Usar
Ao iniciar o programa, você verá um menu com as seguintes opções:
1. **Adicionar processo**: Insira o PID e nome do novo processo
2. **Remover processo**: Remove o processo do topo da stack
3. **Mostrar processos**: Exibe todos os processos na stack
4. **Verificar stack**: Verifica se a stack está vazia
5. **Limpar stack**: Remove todos os processos
6. **Sair**: Encerra o programa

## 🛠️ Tecnologias Utilizadas
- Linguagem C
- CMake para build system
- Alocação dinâmica de memória
- Estrutura de dados Stack

## 📚 Estrutura do Projeto
``` 
.
├── CMakeLists.txt
├── header.h
├── functions.c
└── main.c
```
## 🤝 Contribuindo
1. Faça um fork do projeto
2. Crie uma branch para sua feature (`git checkout -b feature/AmazingFeature`)
3. Commit suas mudanças (`git commit -m 'Add some AmazingFeature'`)
4. Push para a branch (`git push origin feature/AmazingFeature`)
5. Abra um Pull Request

## 📝 Licença
Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
## ✍️ Autor
Seu Nome - [seu-email@exemplo.com](mailto:seu-email@exemplo.com)
## 🎯 Status do Projeto
🚧 Em desenvolvimento
## 📌 Notas
- Este é um projeto acadêmico
- Sugestões e contribuições são bem-vindas
- Reporte bugs através das issues
