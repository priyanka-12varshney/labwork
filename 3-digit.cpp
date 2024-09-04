#include<stdio.h>
int main(){
	int n;
	printf("enter number to check for 3 digit \n");
	scanf("%d",&n);
	if(n>=100 && n<=999){
		printf("yes it is 3-digit number  ");
	}
	else{
		printf("not a 3-digit number");
	}
	return 0;
}
