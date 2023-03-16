#include<stdio.h>
main() 
{
int n,fact=1,i;

     printf("Enter an integer: ");
    scanf("%d", &n); 
    do
    {
        fact=fact*i;
        i++;
    }
	while(i<=n);
     printf("Factorial of %d = %llu", n, fact);
    
    
    
}
