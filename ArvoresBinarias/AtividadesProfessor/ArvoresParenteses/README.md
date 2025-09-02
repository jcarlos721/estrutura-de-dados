<!DOCTYPE html>
<html lang="pt-br">

<head>
  <meta charset="UTF-8">
  <title>Leitor de Árvores Binárias</title>
</head>

<body style="font-family: Arial, sans-serif; color: #333; line-height: 1.6; max-width: 900px; margin: auto;">

  <h1 style="text-align: center; color: #2c3e50;">Leitor de Árvores Binárias (Formato Parentêsado)</h1>

  <p style="text-align: justify;">
    Este projeto implementa um programa capaz de ler árvores binárias representadas no formato parentêsado e 
    imprimir suas travessias em pré-ordem e em-ordem. O projeto tem como objetivo demonstrar conceitos de 
    estruturas de dados, recursão e parsing de strings.
  </p>

  <hr style="border: 1px solid #bdc3c7;">

  <h2 style="color: #34495e;">Funcionalidades</h2>
  <ul>
    <li>Suporte a árvores com rótulos inteiros.</li>
    <li>Entrada máxima de 4096 caracteres.</li>
    <li>Impressão das travessias: pré-ordem e em-ordem.</li>
    <li>Código modular, limpo e de fácil compreensão.</li>
  </ul>

  <h2 style="color: #34495e;">Exemplo de Entrada</h2>
  <pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
1(2(4,5),3(6,7))
  </pre>

  <h2 style="color: #34495e;">Visualização da Árvore</h2>
  <pre style="background-color: #f7f7f7; padding: 10px; border-radius: 5px;">
        1
       / \
      2   3
     / \ / \
    4  5 6 7
  </pre>

  <h2 style="color: #34495e;">Saída Esperada</h2>
  <p><strong>Pré-ordem:</strong> 1 2 4 5 3 6 7</p>
  <p><strong>Em-ordem:</strong> 4 2 5 1 6 3 7</p>

  <h2 style="color: #34495e;">Como Executar</h2>
  <ol>
    <li>Clone o repositório:
      <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">git clone https://github.com/seu-usuario/seu-projeto.git</pre>
    </li>
    <li>Compile o programa (exemplo em C):
      <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">gcc -o arvore arvore.c</pre>
    </li>
    <li>Execute o programa:
      <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">./arvore</pre>
    </li>
  </ol>

  <h2 style="color: #34495e;">Contribuições</h2>
  <p>Contribuições são bem-vindas. Possíveis melhorias incluem:</p>
  <ul>
    <li>Implementar travessias adicionais (pós-ordem, nível por nível).</li>
    <li>Validação de entradas inválidas.</li>
    <li>Visualização gráfica da árvore.</li>
  </ul>

  <hr style="border: 1px solid #bdc3c7;">

  <p style="text-align: center;">Autor: <strong>José Carlos</strong></p>
  <p style="text-align: center;">Licença: <strong>MIT</strong></p>

</body>

</html>

