#include<stdio.h>

int validarPositivo(int valor) {
    while (valor <= 0) {
        printf("Valor invalido! Digite novamente: ");
        scanf("%d", &valor);
    }

    return valor;
}
    
 int validarModalidade(int num) {
    
	while (num == 0 || num > 3) {
        printf("Digite apenas 1, 2 ou 3! Digite novamente:");
        scanf("%d", &num);
    }

    return num;   
    
}

  int validarProtecao(int add) {
    
	while (add >= 0 || add > 1) {
        printf("Somente 1 ou 0! Digite novamente:");
        scanf("%d", &add);
    }

    return add;   
    
}




int main(){
	
int distancia, peso, modalidade , protecao , tentativas , nova_tentativa, inicia;




 printf("Central de Atendimento. Deseja iniciar a sessao? (1) Sim |(0) Nao.\n");
 scanf("%d", &inicia);
 
 if (inicia == 1) {
    
	printf("Sessao iniciada (Entregas)! Por favor complete os dados a abaixo: \n");

    printf("Distancia: ");
    scanf("%d", &distancia);
    distancia = validarPositivo(distancia);

    printf("Peso: ");
    scanf("%d", &peso);
    peso = validarPositivo(peso);

    printf("Selecione a modalidade de entrega: \n (1) Economica | (2) Expressa | (3) Prioritaria: ");
    scanf("%d", &modalidade);
    modalidade = validarModalidade(modalidade);

    printf("Contratar o servico adicional de protecao?: \n (1) Sim | (0) Nao:  ");
    scanf("%d", &protecao);
    
	
	while (protecao != 0 && protecao != 1) {
    printf("Valor invalido! Digite novamente: ");
    scanf("%d", &protecao);
}


    printf("Tentativas adicionais: ");
    scanf("%d", &tentativas);
    
    while (tentativas <= -1 ) {
    printf("Valor invalido! Digite novamente: ");
    scanf("%d", &tentativas);
}
    
   
    

} else if (inicia == 0) {
    printf("Sessao encerrada!\n");
} else {
    printf("Opcao invalida!\n");
}

 

 
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	return 0;
}

