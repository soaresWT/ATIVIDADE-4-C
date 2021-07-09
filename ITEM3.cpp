#include<stdio.h>

int mdc(int a,int b){
	int mdc = 0,i=1;
	 while(a >= i || b >= i){
        if(a%i == 0 && b%i == 0){
            if(mdc<i){
            mdc = i;
            } 
        }
		i++;
    }
    return mdc;
}
	

int main(){
	int num = 0,num2 =0;
	
	printf("qual numeros quer saber se e mdc?:");
	scanf("%d",&num);
	printf("qual numeros quer saber se e mdc?:");
	scanf("%d",&num2);
	
		int a =	mdc(num,num2);
		
		printf("\n%d",a);
}
