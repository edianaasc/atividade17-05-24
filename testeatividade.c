#include<stdio.h>
#include<stdlib.h>
#include "calculo.h"

void main (){
 int opcao;
 int num1;
 int num2;
 int resultado;
     
     while(opcao != 5){

      printf("Escolha uma das alternativas a seguir:\n");
      printf("\n1.Adição\n 2.Subtração\n 3.Multiplicação\n 4.Divisão\n 5.Sair\n");
      scanf("%d",&opcao);   

      switch(opcao){

        case 1:
	  printf("Escolha um valor:\n");
	  scanf("%d",&num1);
	  printf("Escolha outro valor:\n");
	  scanf("%d",&num2);
	  printf("Adição:%d\n",num1+num2);
	  break;
	case 2:
	  printf("Escolha um valor:\n");
	  scanf("%d",&num1);
	  printf("Escolha outro valor:\n");
	  scanf("%d",&num2);
	  printf("Subtração:%d\n",num1-num2);
	  break;
	case 3:
	  printf("Escolha um valor:\n");
	  scanf("%d",&num1);
	  printf("Escolha outro valor:\n");
	  scanf("%d",&num2);
	  printf("Multiplicação:%d",num1*num2);
	  break;
        case 4:
	  printf("Escolha um valor:\n");
	  scanf("%d",&num1);
	  printf("Escolha outro valor:\n");
	  scanf("%d",&num2);

		 
	    while(num2==0){
	          printf("Não existe divisão por 0!\n Escolha outro valor:");
		  scanf("%d",&num2);
		  printf("Divisão:%d",num1/num2);
	    }
	  break;
	 case 5:
	  printf("Saindo do programa...\n");
          break;
	default:
          printf("Opção inválida,\n Escolha outra opção:\n");
      }
     }
  }
 


