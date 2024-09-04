#include<stdio.h>
int main(){
	float m1; 
	float m2;
	float m3;
	float m4;
	printf("to calculate percentage of four subjects\n");
	printf("enter maths marks out of 40\n");
	scanf("%f",&m1);
	printf("enter science marks out of 40\n");
	scanf("%f",&m2);
	printf("enter social science marks out of 40\n");
	scanf("%f",&m3);
	printf("enter english marks out of 40\n");
	scanf("%f",&m4);
	float percentage=(m1+m2+m3+m4)/(1.6);
	printf("\n percentage is %f",percentage);
	return 0;
}
