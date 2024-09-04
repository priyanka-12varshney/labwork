#include<stdio.h>
int main(){
	int n,sum=0,rem;
	printf("enter number:\n");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits is %d",sum);
	return 0;
}
