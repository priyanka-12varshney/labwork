#include<stdio.h>
int main(){
	int n;
	printf("Enter number to check for even or odd\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("Given number is even..\n");
	}
	else{
		printf("Given number is odd..");
	}
	return 0;
	
}
