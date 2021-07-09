#include<stdio.h>

float calc(char operador,float numero1, float numero2){
	if(operador=='+'){
		float x = numero1 + numero2;
		return x;
	}
	if(operador=='-'){
		float x = numero1 - numero2;
		return x;
	}
	if(operador=='/'){
		float x = numero1 / numero2;
		return x;
	}
	if(operador=='*'){
		float x = numero1 * numero2;
		return x;
	}
	
	
	
}

int main(){
	int num1 = 0, num2 = 0;
	char s;
	
	printf("qual operação quer fazer?\n");
	printf("soma(+)\nsubratacao(-)\ndivisao(/)\nmultplicacao(*)\n");
	scanf("%c",&s);
	printf("digite primeiro numero\n");
	scanf("%d",&num1);
	printf("digite segundo numero\n");
	scanf("%d",&num2);
	
	float a = calc(s,num1,num2);
	
	printf("%f",a);
	
}
