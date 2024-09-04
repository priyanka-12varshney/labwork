#include<stdio.h>
int main(){
	float sp,cp,loss,profit;
	printf("enter the cost price\n");
	scanf("%f",&cp);
	printf("enter the selling price \n");
	scanf("%f",&sp);
	if(sp>cp){
		printf("there'll be profit\n");
		profit=sp-cp;
		printf("your profit is %f",profit);
	}
	else if(cp>sp){
		printf("there'll be loss\n");
		loss=cp-sp;
		printf("your loss is %f",loss);
	}
	else{
		printf("neither any profit nor any loss");
	}
	return 0;
}
