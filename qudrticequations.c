#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,realpart,imgpart;
	printf("enter the quadratic equation /n for which you have to find quadratic equations:\n");
	printf("enter coefficient of x^2 ::\n");
	scanf("%f",&a);
	printf("enter coefficient of x ::\n");
	scanf("%f",&b);
	printf("enter value of constant ::\n");
	scanf("%f",&c);
	printf("your quadratic equation is:\n %fx^2 + %fx + %f\n",a,b,c);
	float d=(b*b)-(4*a*c);
	printf("value of discriminant is %f\n",d);
	
	if(d>=0){
		float root1=((-b)+sqrt(d))/(2*a);
		float root2=((-b)-sqrt(d))/(2*a);
		
		printf("root 1 equals :: %f\n",root1);
		printf("root 2 equals :: %f\n",root2);
	}
	else{
	 realpart=(-b)/(2*a);
	 imgpart=-sqrt(d)/(2*a);
	 printf("root1= %f + %f i\n",realpart,imgpart);
	 printf("root2= %f - %f i\n",realpart,imgpart);
	}
	return 0;
}

