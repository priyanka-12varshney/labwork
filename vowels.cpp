#include<stdio.h>
int main(){
	char c;
	printf("enter character::\n");
	scanf("%c",&c);
	if(c=='a' || c=='A'|| c=='e'|| c=='E' || c=='i'|| c=='I'|| c=='o'|| c=='O' || c=='u' || c=='U'){
		printf("yes it is vowel");
	}
	else{
		printf("it is consonant");
	}
	return 0;
}
