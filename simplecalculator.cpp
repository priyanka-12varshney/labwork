#include<stdio.h>
int main(){
	char operation;
	double n1,n2;
	printf("Enter operator(+,-,*,/):");
	scanf("%c",&operation);
	printf("Enter two operands :\n");
	printf("Enter first operand :");
	scanf("%lf",&n1);
	printf(" Enter second operand :\n ");
	scanf("%lf",&n2);
	switch(operation){
		case '+':
			printf("%.1lf  + %.1lf =%.1lf",n1,n2,n1+n2);
			break;
			
		case '-':
			printf("%.1lf  - %.1lf =%.1lf",n1,n2,n1-n2);
			break;
			
		case '*':
			printf("%.1lf  * %.1lf =%.1lf",n1,n2,n1*n2);
			break;
			
		case '/':
			printf("%.1lf  / %.1lf =%.1lf",n1,n2,n1/n2);
			break;
			
		default:
			printf("Your operator is invalid!!!");
	}
	return 0;
}
