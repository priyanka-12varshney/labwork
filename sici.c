#include<stdio.h>
#include<math.h>
int main(){
	float p, r, t,si,ci,amt;
	printf("enter principal amount::\n");
	scanf("%f",&p);
	printf("enter rate of interest:\n");
	scanf("%f",&r);
	printf("enter time :\n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest is :: %f\n",si);
	amt=(p)*((pow((1+r/100),t)));
	printf("amount is :: %f\n",amt);
	ci=amt-p;
	printf("compound interest is :: %f\n",ci);
	return 0;
	
}
