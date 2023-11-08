#include <stdio.h>

int main(){
	
	char ok;
	int escolha;
	double num;
	double num2;
	
	puts("---------------------");
	puts("CALCULADORA SIMPLES");
	puts("---------------------");
	
	do{
	
	puts("Digite o primeiro numero");
	scanf("%lf", &num);
	
	puts("Digite o segundo numero");
	scanf("%lf", &num2); 
	 
	puts("----------"); 
	puts("Escolha");
	puts("----------"); 
	
	puts("Case 1: +");
	puts("Case 2: -");
	puts("Case 3: *");
	puts("Case 4: /");

	scanf("%d", &escolha);
	
	switch (escolha){
		
		case 1: 
		
		printf("%.1lf + %.1lf = %.1lf\n", num, num2, num + num2); 
		break;
		
		case 2: 
		printf("%.1lf - %.1lf = %.1lf\n", num, num2, num - num2); 
		break;
		
		case 3:  
		printf("%.1lf * %.1lf = %.1lf\n", num, num2, num * num2); 
		break;
		
		case 4:  
		printf("%.1lf / %.1lf = %.1lf\n", num, num2, num / num2); 
		break;
		
	}
	
	printf("Deseja continuar? [S/N]");
	scanf(" %c", &ok);
	
	if (ok == 'N'){
		puts("Encerrando execucao...");
		return 1;
	}
	
	} while(ok == 'S');
	
	return 0;
}
