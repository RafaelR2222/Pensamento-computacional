#include<studio.h>
#include<ctype.h>
#include<math.h>

main()
{
   char op;
   int num1,num2;
   float resultado	
	
	printf("\n ==== MENU ====");
	printf("\n S - Soma");
	printf("\n M - Media");
	printf("\n R - Raiz quadrada");
	printf("\n P - Potencia");
	printf("\n F - Finalizar");
	printf("\nEntre com a opcao desejada:");
	fflush(stdin); //limpar o buffer para a leitura do caracter
	scanf("%,&op);
	op=toupper(op);//converter para maiusculo
	
	switch(op)
	{
		case 'S':printf("\nEntre com numero:");
	             scanf ("%d",&num1);
				 printf("\nEntre com o segundo numero:");
				 scanf ("%d",&num2);
				 resultado=num1+num2;
				 printf("\n O resultado da soma =%.2f",resultado);
				 break; 		
	             
		
		case 'M':printf("\nEntre com numero:");
	             scanf ("%d",&num1);
				 printf("\nEntre com o segundo numero:");
				 scanf ("%d",&num2);
				 resultado=num1+num2/2;
				 printf("\n O resultado da média =%.2f",resultado);
				 break;	
	    
		case 'R': printf("\nEntre com numero:");
		          resultado=sqrt(num);//include<math.h>
		          printf("\n O resultado da raiz quadrada =%.2f",resultado);
		          break;
		          
		
		case 'P': printf("\nEntre com numero:");
	             scanf ("%d",&num1);
				 resultado=pow(num1,2);
				 printf("\n O resultado da potência =%.2f",resultado);
				 break;
		
		case 'F':printf("\n ==== Fim do programa ====");)
		break;
		default: printf("\n Opção Invalida!!")
			
	

