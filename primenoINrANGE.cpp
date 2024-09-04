#include <stdio.h>

int main() {
    int low, high, i, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;

        // Ignore numbers less than 2
        if (low <= 1) {
            ++low;
            continue;
        }

        // Check if low is a prime number
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        // Move to the next number
        ++low;
    }

    return 0;
}

