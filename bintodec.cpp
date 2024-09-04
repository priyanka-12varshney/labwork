#include <stdio.h>
long long convert(long long);

int main() {

    long long n;

    printf("Enter a binary number: ");
    scanf("%lld", &n);
	printf("%lld in binary = %lld in decimal", n, convert(n));
	return 0;
}

long long convert(long long n) {

    long long dec = 0;
    int i = 0, rem;
	while (n != 0) {
        rem = n % 10;
		dec += rem << i; 
        n /= 10;
        ++i;
    }

    return dec;
}
