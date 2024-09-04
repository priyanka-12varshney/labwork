#include<stdio.h>
int main(){
	int n,rem,rev=0,orig;
	
	printf("enter the number:\n");
	scanf("%d",&n);
	orig=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==orig){
		printf("yes palindrome..");
	}
	else{
		printf("not palindrome..");
	}
	return 0;
}
