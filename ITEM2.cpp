#include<stdio.h>

int fatorial(int numero){
	int result = 1;
	for( int i = 1; i <= numero ; i++ ){
		result = result * i;
	}
	return result;
}
	

int main(){
	int num = 0;
	
	printf("qual numero quer saber se e fatorial?:");
	scanf("%d",&num);
	
		int a =	fatorial(num);
		
		printf("\n%d",a);
}
