#include<stdio.h>
#include<omp.h>
void main(){

	# pragma omp parallel
	{
		printf("hello world !");
	}
	return;
}
