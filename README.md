Movimentação de Peças de Xadrez em C

Este projeto foi desenvolvido como parte das atividades da disciplina de Introdução à Programação de Computadores e tem como objetivo praticar o uso de estruturas de repetição, loops aninhados e recursividade, utilizando como base os movimentos das peças do jogo de xadrez.

Nível Novato — MOVIMENTANDO AS PEÇAS BÁSICAS
Neste nível, o programa simula o movimento de três peças do xadrez:
1. Torre
2. Bispo
3. Rainha

Cada peça utiliza uma estrutura de repetição diferente, conforme solicitado no desafio:
1. Torre → `for`
2. Bispo →`while`
3. Rainha → `do-while`

Os valores de movimentação são definidos diretamente no código e, a cada casa percorrida, o programa imprime no console a direção do movimento utilizando o comando `printf`.

EXEMPLOS DE SAÍDA :
1. Direita
2. Cima Direita
3. Esquerda

O objetivo deste nível é reforçar o entendimento das estruturas de repetição e da lógica básica de controle de fluxo.

Nível Aventureiro — MOVIMENTANDO O CAVALO
Neste nível, o programa é expandido para incluir o movimento do Cavalo, que se desloca em formato de “L”. O movimento simulado é:
- Duas casas para baixo
- Uma casa para a esquerda

Para isso, foram utilizados loops aninhados, sendo obrigatoriamente um `for` e outro `while`.

EXEMPLOS DE SAÍDA DO CAVALO :
1. Baixo
2. Baixo
3. Esquerda

Este nível foca no uso correto de loops aninhados e na organização do código conforme o aumento da complexidade.

Nível Mestre — MOVIMENTOS COMPLEXOS
No nível mestre, o código é aprimorado com técnicas mais avançadas: Recursividade
Os movimentos da:
1. Torre
2. Bispo
3. Rainha

Foram reimplementados utilizando funções recursivas, substituindo os loops simples usados nos níveis anteriores. Cada função imprime a direção do movimento a cada chamada recursiva.

♞ BISPO COM LOOPS ANINHADOS
Além da recursividade, o Bispo também utiliza loops aninhados, onde:
- O loop externo controla o movimento vertical
- O loop interno controla o movimento horizontal

♘ CAVALO COM LOOPS COMPLEXOS
O movimento do Cavalo foi aprimorado para:
- Duas casas para cima
- Uma casa para a direita

Neste caso, são utilizados loops com múltiplas condições, além dos comandos `continue` e `break` para controlar o fluxo do programa de forma mais precisa.
