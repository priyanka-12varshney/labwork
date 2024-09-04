#include<stdio.h>
int main(){
	int n;
	int fact=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n<0){
		printf("Factorial for negative number doesn't exist..\n");
	}
	else{
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of %d is %d ",n,fact);
	return 0;
}
}
