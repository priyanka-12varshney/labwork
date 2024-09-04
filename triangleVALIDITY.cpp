#include<stdio.h>
int main(){
	float a,b,c;
	printf("enter sides of triangle\n");
	printf("enter 1st side of triangle\n");
	scanf("%f",&a);
	printf("enter 2nd side of triangle\n");
	scanf("%f",&b);
	printf("enter 3rd side of triangle\n");
	scanf("%f",&c);
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
		printf("triangle can be formed");
	}
	else{
		printf("triangle can't be formed");
	}
	return 0;
}
