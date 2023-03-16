#include <stdio.h>

int main() 
{
   int n,i,j=64;
   scanf("%d", &n);
   for (int i = 1; i <= n; ++i) 
   {
        for (int j = 1; j <= i; ++j) 
        {
            printf("%c ",i+64);
        }
        printf("\n");
   }
   
}

