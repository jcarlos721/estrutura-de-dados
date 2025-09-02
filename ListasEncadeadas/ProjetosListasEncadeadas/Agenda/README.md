<h1 style="text-align: center; color: #2c3e50;">Gerenciador de Tarefas com Lista Encadeada Simples</h1>

<p style="text-align: justify;">
  Este projeto implementa um gerenciador de tarefas utilizando a estrutura de <strong>lista encadeada simples</strong> em C.
  Permite operações como inserção, remoção, busca e exibição de tarefas, incluindo inserção ordenada por prioridade.
</p>

<hr style="border: 1px solid #bdc3c7;">

<h2 style="color: #34495e;">Funcionalidades</h2>
<ul>
  <li>Inserção de tarefas no início e no fim da lista.</li>
  <li>Remoção de tarefas por posição ou por nome.</li>
  <li>Busca de tarefas por nome.</li>
  <li>Exibição de todas as tarefas cadastradas.</li>
  <li>Inserção ordenada por prioridade (opcional).</li>
</ul>

<h2 style="color: #34495e;">Estrutura do Nó</h2>
<p style="text-align: justify;">Cada nó representa uma tarefa com informações básicas:</p>
<pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
typedef struct Tarefa {
    char nome[50];
    int prioridade;
    char data[11]; // formato DD/MM/AAAA
    struct Tarefa *next;
} Tarefa;
</pre>

<h2 style="color: #34495e;">Exemplo de Operações</h2>
<p style="text-align: justify;">
  Inserção de tarefas, busca e remoção permitem organizar e manipular a lista de forma eficiente.
</p>

<h3 style="color: #34495e;">Inserir no Início</h3>
<pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
NovaTarefa->next = head;
head = NovaTarefa;
</pre>

<h3 style="color: #34495e;">Inserir no Fim</h3>
<pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
Último->next = NovaTarefa;
NovaTarefa->next = NULL;
</pre>

<h3 style="color: #34495e;">Remover por Nome</h3>
<pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
Ajusta ponteiros do nó anterior;
Libera memória do nó removido;
</pre>

<h3 style="color: #34495e;">Exibir Todas as Tarefas</h3>
<pre style="background-color: #ecf0f1; padding: 10px; border-radius: 5px;">
Percorre a lista do head até NULL;
Imprime nome, prioridade e data;
</pre>

<h2 style="color: #34495e;">Fluxo do Programa</h2>
<p style="text-align: justify;">Menu interativo sugerido:</p>
<ol>
  <li>Inserir tarefa no início</li>
  <li>Inserir tarefa no fim</li>
  <li>Inserir tarefa por prioridade</li>
  <li>Remover tarefa por posição</li>
  <li>Remover tarefa por nome</li>
  <li>Buscar tarefa</li>
  <li>Exibir todas as tarefas</li>
  <li>Sair</li>
</ol>

<h2 style="color: #34495e;">Como Executar</h2>
<ol>
  <li>Clone o repositório:
    <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">git clone https://github.com/seu-usuario/seu-projeto.git</pre>
  </li>
  <li>Compile o programa:
    <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">gcc -o gerenciador gerenciador.c</pre>
  </li>
  <li>Execute o programa:
    <pre style="background-color: #ecf0f1; padding: 5px; border-radius: 5px;">./gerenciador</pre>
  </li>
</ol>

<h2 style="color: #34495e;">Contribuições</h2>
<p>Contribuições são bem-vindas. Possíveis melhorias incluem:</p>
<ul>
  <li>Salvar tarefas em arquivo.</li>
  <li>Adicionar interface gráfica.</li>
  <li>Implementar ordenação por múltiplos critérios.</li>
</ul>

<hr style="border: 1px solid #bdc3c7;">

<p style="text-align: center;">Autor: <strong>José Carlos</strong></p>
<p style="text-align: center;">Licença: <strong>MIT</strong></p>
