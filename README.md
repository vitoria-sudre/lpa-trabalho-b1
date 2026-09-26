# Trabalho B1 - Lógica de Programação e Algoritmos

## Descrição

O programa simula uma Central de Atendimento para o processamento de entregas. O usuário informa os dados de cada entrega, como distância, peso, modalidade, proteção adicional e tentativas adicionais. A partir dessas informações, o programa calcula o valor total de cada entrega e apresenta um resumo final da sessão.

## Funcionalidades

* Iniciar ou encerrar uma sessão de entregas.
* Informar a distância da entrega.
* Informar o peso da entrega.
* Escolher a modalidade de entrega:
  -Econômica;
  -Expressa;
  -Prioritária.
    
* Escolher se deseja contratar o serviço adicional de proteção.
* Informar a quantidade de tentativas adicionais.
* Validar os valores informados pelo usuário.
* Calcular o valor de cada entrega.
* Processar várias entregas na mesma sessão.
* Contabilizar a quantidade total de entregas.
* Calcular o valor total das entregas na sessão.
* Calcular o valor médio das entregas.
* Contabilizar a quantidade de entregas por modalidade.
* Identificar o maior valor de entrega.
* Identificar o menor valor de entrega.

## Organização da solução

O programa foi dividido em funções para realizar as validações dos dados informados pelo usuário.

A função `validarPositivo()` verifica se os valores de distância e peso são maiores que zero.

A função `validarModalidade()` verifica se a modalidade informada corresponde às opções disponíveis: 1, 2 ou 3.

A função `validarProtecao()` verifica se o usuário informou 0 ou 1 para a contratação do serviço de proteção.

A função `main()` é responsável pelo fluxo principal do programa, entrada dos dados, cálculos dos valores das entregas, contadores e apresentação do resumo final.


## Compilação

O programa foi desenvolvido na linguagem C e pode ser compilado utilizando um compilador compatível com a linguagem C, como o GCC ou o compilador disponível no Dev-C++.

## Execução

Após a compilação, o programa pode ser executado pelo ambiente de desenvolvimento ou pelo arquivo executável gerado pelo compilador.

Para iniciar (1).

## Uso de Inteligência Artificial

Foi utilizada a ferramenta ChatGPT, da OpenAI, como apoio durante o desenvolvimento.

-Finalidade

A ferramenta foi utilizada para esclarecer dúvidas sobre lógica de programação e linguagem C, auxiliar na identificação de erros no código, explicar conceitos de programação e apoiar a revisão dos cálculos e acumuladores utilizados no programa.

Exemplos de prompts relevantes

"Me explica cada um dos acumuladores do resumo final."

"Corrigir os erros do resumo final e dos acumuladores."

"Valor médio: R$ 1.#J"

"Como calcula o valor total e a média das entregas?"

"Como atualizar os acumuladores?"

"Validações de 1/0?"

Sugestões aproveitadas

Foram aproveitadas sugestões relacionadas à inicialização dos acumuladores e contadores, ao cálculo do valor total das entregas, ao cálculo do valor médio e à organização da apresentação do resumo final.

Também foram utilizadas explicações para compreender melhor o funcionamento dos contadores, acumuladores, condições while e comandos printf.

Alterações e correções realizadas

Após as respostas da IA, foram realizadas alterações no código para corrigir o funcionamento dos acumuladores. A variável responsável pela quantidade de entregas foi inicializada com zero, o valor total passou a ser acumulado corretamente e foi adicionada a média dos valores das entregas.

Também foram corrigidas partes da apresentação do resumo final, incluindo a organização das informações e a utilização de \n para separar as linhas.

As sugestões da IA foram analisadas e adaptadas ao código desenvolvido, sendo realizadas alterações.

## Fontes consultadas

* Materiais e conteúdos disponibilizados pelo professor na disciplina de Lógica de Programação e Algoritmos.
* Documentação e materiais de referência sobre a linguagem C, quando necessário.
* Foi utilizado o Excel para realizar o teste de mesa de todos os cálculos.
