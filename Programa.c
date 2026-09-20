#include <stdio.h>

int validarPositivo(int valor) {
    while (valor <= 0) {
        printf("Valor invalido! Digite novamente: ");
        scanf("%d", &valor);
    }

    return valor;
}

int validarModalidade(int num) {
    while (num < 1 || num > 3) {
        printf("Digite apenas 1, 2 ou 3! Digite novamente: ");
        scanf("%d", &num);
    }

    return num;
}

int validarProtecao(int add) {
    while (add != 0 && add != 1) {
        printf("Somente 1 ou 0! Digite novamente: ");
        scanf("%d", &add);
    }

    return add;
}

int main() {

    int distancia, peso, modalidade, protecao;
    int tentativas, nova_tentativa, inicia;

    float Subtotal, adicionalPeso, totalad, adicionalModalidade, adicionalProtecao, adicionalTentativas;


    printf("Central de Atendimento. Deseja iniciar a sessao? (1) Sim | (0) Nao.\n");
    scanf("%d", &inicia);


    if (inicia == 1) {

        printf("\nSessao iniciada (Entregas)!\n");
        printf("Por favor complete os dados abaixo:\n\n");


        printf("Distancia: ");
        scanf("%d", &distancia);
        distancia = validarPositivo(distancia);


        printf("Peso: ");
        scanf("%d", &peso);
        peso = validarPositivo(peso);


        printf("Selecione a modalidade de entrega:\n");
        printf("(1) Economica | (2) Expressa | (3) Prioritaria: ");
        scanf("%d", &modalidade);
        modalidade = validarModalidade(modalidade);


        printf("Contratar o servico adicional de protecao?\n");
        printf("(1) Sim | (0) Nao: ");
        scanf("%d", &protecao);
        protecao = validarProtecao(protecao);


        printf("Tentativas adicionais: ");
        scanf("%d", &tentativas);

        while (tentativas < 0) {
            printf("Valor invalido! Digite novamente: ");
            scanf("%d", &tentativas);
        }


        /* CALCULO DO SUBTOTAL PELA DISTANCIA */

        if (distancia > 0 && distancia <= 5) {

            Subtotal = 8.00 + (distancia * 1.20);

        } 
        else if (distancia > 5 && distancia <= 15) {

            Subtotal = 12.00 + (distancia * 1.20);

        } 
        else if (distancia > 15 && distancia <= 30) {

            Subtotal = 18.00 + (distancia * 1.20);

        } 
        else {

            Subtotal = 25.00 + (distancia * 1.20);

        }


        /* CALCULO DO ADICIONAL PELO PESO */

        if (peso <= 2) {

            adicionalPeso = 0.00;

        } 
        else if (peso <= 5) {

            adicionalPeso = Subtotal * 0.05;

        } 
        else if (peso <= 10) {

            adicionalPeso = Subtotal * 0.10;

        } 
        else {

            adicionalPeso = Subtotal * 0.20;

        }

        
        /* CALCULO DA MODALIDADE */
        
        if(modalidade == 1){
        	
           adicionalModalidade = 0.00;
		}
        
        else if (modalidade == 2){
        	
           adicionalModalidade = Subtotal * 0.15;
		}
        	
        else if(modalidade == 3){
        	
           adicionalModalidade = Subtotal * 0.30;
		}	
		
		 /* CALCULO DA Proteção ADD */
        
		if(protecao == 1){
			
		  adicionalProtecao = 7.50;
		}
		
		else{
			
		  adicionalProtecao = 0.00;
		}	
        	  
         /* CALCULO DAS TENTATIVAS ADD */
         
         
        adicionalTentativas = tentativas * 4.00;

         
        
        
        
        /* TOTAL */

        totalad = Subtotal + adicionalPeso + adicionalModalidade + adicionalProtecao + adicionalTentativas;


        printf("\n-----------------------------\n");
        printf("Subtotal: R$ %.2f\n", Subtotal);
        printf("Adicional Peso: R$ %.2f\n", adicionalPeso);
        printf("Modalidade: R$ %.2f\n", adicionalModalidade);
        printf("Protecao Adicional: R$ %.2f\n", adicionalProtecao);
        printf("Tentativas Adicionais: R$ %.2f\n", adicionalTentativas);
        printf("Total: R$ %.2f\n", totalad);
        printf("-----------------------------\n");


    } 
    
    else if (inicia == 0) {

        printf("Sessao encerrada!\n");

    } 
    else {

        printf("Opcao invalida!\n");

    }



    return 0;
}
    
