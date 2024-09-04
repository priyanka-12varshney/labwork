#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter first number;\n");
	scanf("%d",&n1);
	printf("Enter second number;\n");
	scanf("%d",&n2);
	printf("Enter third number;\n");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3){
		printf("%d is greatest\n",n1);
	}
	else if(n2>n1 && n2>n3){
		printf("%d is greatest\n",n2);
	}
	else{
		printf("%d is greatest",n3);
	}
	return 0;
}
