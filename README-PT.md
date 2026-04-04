# 📚 Sistema de Cadastro de Livros em C

🌐 Available in:

* 🇺🇸 [English](./README.md)
* 🇧🇷 Português

---

## 📌 Sobre o Projeto

Este projeto é um **sistema simples de cadastro de livros** desenvolvido na linguagem C.

Foi criado com o objetivo de praticar conceitos fundamentais como:

* Programação estruturada
* Manipulação de memória
* Organização de dados

A aplicação funciona como uma biblioteca em memória, permitindo ao usuário **cadastrar, remover e listar livros** através de um menu interativo no terminal.

---

## ⚙️ Funcionalidades

* 📖 Cadastro de livros com:

  * Nome
  * Autor
  * Editora
  * Edição
* ❌ Exclusão de livros por índice
* 📋 Listagem de livros
* 🔤 Ordenação automática em ordem alfabética (por nome)
* 📊 Controle de quantidade máxima de livros
* 🧠 Uso de `struct` para modelagem dos dados

---

## 🧱 Estrutura do Código

O projeto utiliza:

* `struct Livro` para representar os livros
* Vetor de estruturas para armazenamento
* `switch-case` para controle do menu
* Funções auxiliares para:

  * Limpeza do buffer de entrada
  * Ordenação com `strcmp` (Bubble Sort)
* Manipulação de strings com `fgets` e `strcspn`

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* Bibliotecas padrão:

  * `stdio.h`
  * `stdlib.h`
  * `string.h`

---

## ▶️ Como Compilar e Executar

```bash
gcc main.c -o biblioteca
./biblioteca
```

---

## 🎯 Objetivos de Aprendizado

Este projeto foi desenvolvido com foco em:

* Lógica de programação
* Estruturas de dados básicas
* Manipulação de strings em C
* Organização de dados em memória
* Boas práticas iniciais de programação

---

## 🚀 Possíveis Melhorias Futuras

### 🔍 Sistema de Busca

* Busca por nome, autor ou editora
* Busca parcial (ex: parte do nome do livro)

### ⚡ Otimização de Performance

* Substituir Bubble Sort por algoritmos mais eficientes (Quick Sort, Merge Sort)
* Implementar busca binária

### 💾 Persistência de Dados

* Salvar dados em arquivos `.txt` ou `.bin`
* Carregar dados ao iniciar o programa

### 🧩 Modularização

* Separar código em arquivos `.c` e `.h`

### 🧠 Estruturas de Dados Avançadas

* Listas encadeadas
* Árvores binárias de busca
* Tabelas hash (ideal para grandes volumes de dados)

---

## 📚 Considerações Finais

Este projeto representa um passo importante no aprendizado da linguagem C e serve como base para evoluções futuras envolvendo estruturas de dados e algoritmos mais avançados.
