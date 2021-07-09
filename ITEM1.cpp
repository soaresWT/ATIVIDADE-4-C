#include<stdio.h>

int primo(int numero){
	int cont = 0;
	for(int i = 2; i<=numero;i++){
		if(numero%i==0){
			cont++;
		}
	}
	if(cont==1){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int num = 0;
	
	printf("qual numero quer saber se e primo?:");
	scanf("%d",&num);
	
		int a =	primo(num);
		
		printf("\n%d",a);
}
