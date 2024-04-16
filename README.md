# 1º Implementação computacional
    Linguagem de programação: python ou C
    Data de entrega (via AVA) e apresentação (em sala de aula): 18/04
    O trabalho poderá ser apresentado em duplas ou individual. 
    Método a ser implementado: Método da Bisseção (Método que fornece uma raíz aproximada de uma função, isto é, gera uma sequência que converge (se aproxima) da raíz exata da função).

## Passos: (sugestão)
    1º) Entrar com uma função contínua f(x) em um intervalo [a,b] em que f(a) e f(b) tem sinais opostos e com a tolerância E < 10^-n, n=1,2,3... 
    2º) Verificar que f(a)*f(b) < 0 (isto é, que f(a) e f(b) e tem sinais opostos) ;
    3º) Obtenha o ponto médio do intervalo [a,b] designado por X0;
    4º) Calcular f(X0). Se f(X0) = 0 então é a raíz exata (Nesse caso, Pare, e emite a mensagem: X0 é a raíz exata;
    5º) Caso f(X0) seja diferente de zero: 
        Se f(a)*f(X0) < 0, então obtenha o ponto médio (X1) do intervalo [a, X0] designado por X1; caso contrário, isto é, se f(a)* f(X0) > 0  ,entã obtenha o ponto médio (X1) do intervalo [X0,b] designado por X1;
    6º) Calcular f(X1). Se f(X1) = 0 então X1 é a raíz exata (Nesse caso, Pare, e emite a mensagem: X1 é a raíz exata;
    7º) Calcular |X1 - X0|. Se |X1 - X0| < 10^-n, Pare e emita a mensagem “A raíz aproximada é X1... Caso contrário, o processo continua, de forma análoga, até que f(Xn) = 0 ou |Xn - Xn-1| < 10^-n.
    8º) .....
    9º) etc...
    Obs: a) Agrupar os dados em uma tabela. ![alt text](image.png)
    b) Plotar o gráfico da função, exibindo a raíz exata, a raíz aproximada, as iterações, etc.