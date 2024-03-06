#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char op;
	double num1,num2;
	
	printf("\tSIMPLE CALCULATOR PROJECT USING SWITCH STATEMENT\n");
	
	printf("ENter the operator(+,-,/,*): ");
	scanf("%c",&op);
	
	printf("Enter two digits: \n");
	scanf("%lf %lf",&num1, &num2);
	
	switch(op){
		case '+':
			printf("%.2lf + %.2lf = %2.lf",num1, num2, (num1 + num2));
			break;
			
		case '-':
		    printf("%.2lf - %.2lf = %.2lf",num1,num2, (num1-num2));
		    break;
		
		case '*':
			printf("%.2lf * %.2lf=%.2lf",num1,num2,(num1*num2));
			break;
			
		
		case '/' :
			if(num2!=0){
			printf("%.2lf / %.2lf= %.2lf",num1,num2,(num1/num2));
			}else{
			printf("DIVISION ERROR!!!");
			}
			break;
			
		default:
			printf("Enter the Correct operator");
			break;
	}
	return 0;
}
