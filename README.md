📚 Sistema de Cadastro de Livros em C

📌 Descrição do Projeto:
Este projeto é um sistema simples de cadastro de livros, desenvolvido na linguagem C, com o objetivo de praticar conceitos fundamentais de programação estruturada, manipulação de dados e organização em memória.
O programa funciona como uma biblioteca em memória, permitindo ao usuário cadastrar, excluir e listar livros por meio de um menu interativo no terminal.

⚙️ FUNCIONALIDADES

📖 Cadastro de livros:
- Nome;
- Autor;
- Editora;
- Edição;
- ❌ Exclusão de livros a partir de um índice escolhido pelo usuário;
- 📋 Listagem de livros;
- Os livros são exibidos em ordem alfabética pelo nome;
- 📊 Controle de quantidade máxima de livros cadastrados;
- 🧠 Uso de estruturas (struct) para organização dos dados;

🧱 Estrutura do Código

O programa utiliza:
- struct Livro para representar cada livro;
- Vetor de estruturas para armazenar os livros;
- Menu interativo com switch-case;
- Funções auxiliares para: Limpeza do buffer de entrada, Ordenação alfabética utilizando strcmp (Bubble Sort);
- Manipulação de strings com fgets e strcspn;

🛠️ Tecnologias Utilizadas:

- Linguagem C;
- Biblioteca padrão: stdio.h, stdlib.h, string.h.

▶️ Como Compilar e Executar

Utilizando o GCC:

gcc main.c -o biblioteca
./biblioteca


🎯 Objetivos de Aprendizado

Este projeto foi desenvolvido com foco em:
- Lógica de programação;
- Estruturas de dados básicas;
- Manipulação de strings em C;
- Organização de dados em memória;
- Boas práticas iniciais de programação;

🚀 Possíveis Melhorias Futuras

Algumas evoluções pensadas para versões futuras do projeto:

🔍 Sistema de busca eficiente
- Busca por nome, autor ou editora;
- Busca parcial (ex: digitar parte do nome do livro);

⚡ Otimização para grandes volumes de dados
- Substituir o Bubble Sort por algoritmos mais eficientes (Quick Sort, Merge Sort);
- Implementar busca binária após ordenação;

💾 Persistência de dados
- Salvar os livros em arquivo (.txt ou .bin);
- Carregar os dados ao iniciar o programa;

🧩 Modularização do código
- Separar funções em arquivos .c e .h.

🧠 Estruturas de dados avançadas
Listas encadeadas
- Árvores binárias de busca;
- Tabelas hash para busca rápida, ideal para mais de 10.000 livros;
- Essas melhorias visam tornar o sistema mais escalável, eficiente e próximo de um banco de dados real.

📚 Considerações Finais

Este projeto representa um passo importante no aprendizado da linguagem C e serve como base para evoluções futuras em estruturas de dados e algoritmos mais avançados.
