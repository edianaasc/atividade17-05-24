
void adicao(){
	int num1;
	int num2;
	int resultado;
	resultado= num1+num2;

	printf("calculadora de soma\n");
	printf("digite um valor:\n");
	scanf("%d",&num1);
	printf("digite outro valor:\n");
	scanf("%d",&num2);
	printf("Adição:%d\n",&num1,num2,resultado);
}	
        int subtracao(){
	int num1;
	int num2;
	int resultado;
	resultado= num1-num2;

	printf("calculadora de subtracao\n");
        printf("digite um valor:\n");
        scanf("%d",&num1);
        printf("digite outro valor:\n");
	scanf("%d",&num2);
	printf("Subtração:%d\n",&num1,num2,resultado);
}
        int multiplicacao(){
	int num1;
	int num2;
	int resultado;
	resultado= num1*num2;
	
	printf("calculadora de multiplicacao\n");
        printf("digite um valor:\n");
	scanf("%d",&num1);
        printf("digite outro valor:\n");
	scanf("%d",&num2);
	printf("multiplicação:%d\n",&num1,num2,resultado);
}	
        int divisao(){
	int num1;
        int num2;
 	int resultado;
	resultado=num1/num2;

	printf("calculadora de divisao\n");
	printf("digite um valor:\n");
	scanf("%d",&num1);
	printf("digite outro valor:\n");
	scanf("%d",&num2);
	printf("divisao:%d\n",&num1,num2,resultado);

	while(num2==0){
	printf("Não existe divisão por 0. Digite outro valor:\n");
        scanf("%d",&num2);
} 	
}


