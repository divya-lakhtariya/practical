#include <stdio.h>
int main() {
    int n,fact=1,i;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    {
        for (i = 1; i <= n; ++i)
		 {
            fact=fact*i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}

