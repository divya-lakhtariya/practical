#include <stdio.h>
main()
{
   int a, i, value = 0;
 
    printf("Enter number to check prime number or not");
    scanf("%d",&a);
    i=2;
    while( i<=a/2)
    {
        
        if(a%i==0)
        {
            value=1;
            break;
        }
        i++;
    }
 
    if (value==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
 
    
    
}
 
