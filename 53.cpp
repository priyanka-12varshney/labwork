#include<stdio.h>
int main(){
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if((n%5==0)&&(n%3==0)){
		printf("divisible by both 5 and 3");
	}
	else{
		printf("not divisible by both");
	}
	return 0;
}
