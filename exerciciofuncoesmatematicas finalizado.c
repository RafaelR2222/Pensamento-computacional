#include<stdio.h>
#include<ctype.h>
#include<math.h>

main()
{
	int num,num2;
	float resultado;
	char op;
	
	printf("\n ===== MENU =====");
	printf("\n S - Soma");
	printf("\n M - Media");
	printf("\n R - Raiz Quadrada");
	printf("\n P - Potencia");
	printf("\n F - Finalizar");
	printf("\nEntre com a opcao desejada:");
	fflush(stdin); //limpar o buffer para a leitura do caracter
	scanf("%c",&op);
	op=toupper(op); //converter para maiusculo
	
	while(op!='F')
{

	switch(op)
	{
		case 'S': printf("\nEntre com o primeiro numero:");
		          scanf("%d",&num);
		          printf("\nEntre com o segundo numero:");
		          scanf("%d",&num2);
		          resultado=num+num2; 
		          printf("\n O resultado da Soma =%.2f",resultado);
		          break;
		case 'M': printf("\nEntre com o primeiro numero:");
		          scanf("%d",&num);
		          printf("\nEntre com o segundo numero:");
		          scanf("%d",&num2);
		          resultado=(num+num2)/2; 
		          printf("\n O resultado da Media =%.2f",resultado);
		          break;
		case 'R': printf("\nEntre com o numero:");
		          scanf("%d",&num);
		          resultado=sqrt(num); //include<math.h>
		          printf("\n O resultado da Raiz Quadrada =%.2f",resultado);
		          break;
		case 'P': printf("\nEntre com o numero:");
		          scanf("%d",&num);
		          resultado=pow(num,2);
		          printf("\n O resultado da Potencia =%.2f",resultado);
		          break;
		case 'F': printf("\n ======== FIM DO PROGRAMA ========");
		          break;
		default: printf("\n Opcao Invalida!!");
		
	}
	int num,num2;
	float resultado;
	char op;
	
	printf("\n ===== MENU =====");
	printf("\n S - Soma");
	printf("\n M - Media");
	printf("\n R - Raiz Quadrada");
	printf("\n P - Potencia");
	printf("\n F - Finalizar");
	printf("\nEntre com a opcao desejada:");
	fflush(stdin); //limpar o buffer para a leitura do caracter
	scanf("%c",&op);
	op=toupper(op); //converter para maiusculo
	
	

	
	
}
}
