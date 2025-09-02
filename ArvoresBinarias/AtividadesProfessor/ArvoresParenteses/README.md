```markdown
# 🌳 Leitor e Impressor de Árvores Binárias (Formato Parentêsado)

![GitHub language](https://img.shields.io/github/languages/top/seu-usuario/seu-projeto) 
![GitHub license](https://img.shields.io/github/license/seu-usuario/seu-projeto) 
![GitHub stars](https://img.shields.io/github/stars/seu-usuario/seu-projeto)

---

## 🔹 Sobre o Projeto

Este programa lê **árvores binárias** representadas em **formato parentêsado** e imprime suas travessias:

- **Pré-ordem** (raiz → esquerda → direita)  
- **Em-ordem / Simétrica** (esquerda → raiz → direita)  

Ele é ideal para aprendizado de **estruturas de dados, recursão e parsing de strings**.

---

## 🔹 Como Funciona

A árvore é representada com parênteses, por exemplo:

```

1(2(4,5),3(6,7))

```

Visualmente:

```

```
    1
   / \
  2   3
 / \ / \
4  5 6 7
```

```

- **Pré-ordem:** `1 2 4 5 3 6 7`  
- **Em-ordem:** `4 2 5 1 6 3 7`

---

## 🔹 Recursos

✅ Suporta árvores com **rótulos inteiros**  
✅ Entrada máxima: **4096 caracteres**  
✅ Travessias pré-ordem e em-ordem  
✅ Código modular e fácil de entender  

---

## 🔹 Tecnologias

- Linguagem: `C / C++ / Python`  
- Estrutura de dados: **Árvore Binária**  
- Conceitos aplicados:
  - Recursão
  - Parsing de strings
  - Travessia de árvores

---

## 🔹 Exemplos de Entrada e Saída

| Entrada             | Pré-ordem       | Em-ordem       |
|--------------------|----------------|----------------|
| `1(2(4,5),3(6,7))` | 1 2 4 5 3 6 7 | 4 2 5 1 6 3 7 |
| `10(5,15(12,20))`  | 10 5 15 12 20 | 5 10 12 15 20 |

---

## 🔹 Diagrama de Exemplos

### Exemplo 1

```

```
    10
   /  \
  5    15
      /  \
    12    20
```

````

- Pré-ordem: `10 5 15 12 20`  
- Em-ordem: `5 10 12 15 20`

---

## 🔹 Como Executar

1. Clone o repositório:

```bash
git clone https://github.com/seu-usuario/seu-projeto.git
````

2. Compile (exemplo em C):

```bash
gcc -o arvore arvore.c
```

3. Execute e insira a árvore no formato parentêsado:

```bash
./arvore
```

---

## 🔹 Contribuições

Contribuições são bem-vindas! Sugestões:

* Implementar travessias adicionais (pós-ordem, nível por nível)
* Validação de entradas inválidas
* Visualização gráfica da árvore

---

## 🔹 Autor

**José Carlos**
[GitHub](https://github.com/seu-usuario)

---

## 🔹 Licença

Este projeto está licenciado sob a **MIT License**.

```
