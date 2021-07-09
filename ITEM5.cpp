#include<stdio.h>

int elevar(int b, int e){
	int result = b,total = 0;
 	
	 for (int i = 1; i < e; ++i){
	 	  result *= b;
	 	  total = result;
	 }
      
		
	
	return total;
}

 
int main(){
	int base = 0, expo = 0;

	printf("digite a base:");
	scanf("%d",&base);
	printf("digite o expoente:");
	scanf("%d",&expo);
	
	int a = elevar(base,expo);
	
	printf("\n%d",a);
	
	
	
	
}
