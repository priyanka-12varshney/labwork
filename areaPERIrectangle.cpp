#include<stdio.h>
int main(){
	float l,b;
	printf("enter length of rectangle\n");
	scanf("%f",&l);
	printf("enter breadth of rectangle\n");
	scanf("%f",&b);
	float area=l*b;
 	float perimeter=(2*(l+b));
 	if(area>perimeter){
 		printf("area of reactangle is greater than its perimeter");
	 }
	 else if(perimeter>area){
	 	printf("perimeter of rectangle is greater than its area");
	 }
	 else{
	 	printf("both are equal to each other");
	 }
	 return 0;
}
