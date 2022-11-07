<p align="center">
  <img src="https://user-images.githubusercontent.com/106783009/191138556-b0ec92fb-8eb0-4151-b109-d5ca961b5c3c.png" />
</p>
Alunos: João Gabriel Manfré Nazar (13733652) e Felipi Yuri Santos (11917292)

# LabICC2 - Trabalho 5 - Hora de Ação - Comparação entre métodos de Quick Sort
&ensp;Esse trabalho tem como intuito explorar a diferença de demanda computacional e tempo de execução entre diferentes métodos de escolha de pivô em um algoritmo Quick Sort. 


## Implementação do Quick Sort com pivô no início

![image](https://user-images.githubusercontent.com/106783009/200212159-e3cab6b1-3c98-4bdc-b71f-e1fb80548b74.png)


## Implementação do Quick Sort com pivô aleatório

![image](https://user-images.githubusercontent.com/106783009/200212948-9bc83059-af58-4e01-9830-96f903dcb81b.png)


## Implementação do Quick Sort com pivô no meio

![image](https://user-images.githubusercontent.com/106783009/200213550-f508b339-ba55-4092-89df-1c4df43060d6.png)


## Casos de teste
&ensp;Os casos de teste de entrada podem ser encontrados na pasta input. A entrada consiste no tamanho do vetor que vai ser ordenado, seguida por cada elemento do vetor. As saídas do programa estão nas respectivas pastas para cada algoritmo. 

### Leitura do input

![image](https://user-images.githubusercontent.com/106783009/200210866-c3df2547-8539-41db-8cd9-1df4ea4eeb6a.png)


## Comparação dos Tempos de Execução
&ensp;O computador utilizado para os testes foi um notebook Dell G15 5510, com um processador Intel Core i5-10500H, funcionando conectado ao carregador com Eficiência Agressiva selecionado como opção de modo de aumento de desempenho do processador nas opções de energia do Windows 10 Pro 21H2. O computador possui 24GB de Memória RAM.

### Quick Sort com pivô no início

![image](https://user-images.githubusercontent.com/106783009/200212100-beb0282e-6d1a-4e6e-a89f-d612b9c30eff.png)
![image](https://user-images.githubusercontent.com/106783009/200214049-2f4e281a-edfe-4738-9da3-ca349397507b.png)

### Quick Sort com pivô aleatório

![image](https://user-images.githubusercontent.com/106783009/200212768-d609d8ec-4937-4fba-96ba-03b61b3a560f.png)
![image](https://user-images.githubusercontent.com/106783009/200214021-9e537bb0-b758-47ac-944f-cd092dcb2dad.png)

### Quick Sort com pivô no meio

![image](https://user-images.githubusercontent.com/106783009/200213515-753d92c8-0253-4129-849a-b29e22e9a2a2.png)
![image](https://user-images.githubusercontent.com/106783009/200214162-5a41854b-8813-47bb-b82c-d1ad40686e75.png)


## Considerações
&ensp; Como maneira de evitar o pior caso para o algoritmo Quick Sort, foi possível observar que, dentre as soluções testadas, tanto a escolha aleatória dos pivôs quanto a escolha de um pivô no meio se mostraram eficientes para resolver o problema do pior caso, com diferenças muito próximas a uma margem de erro entre os tempos de execução.
