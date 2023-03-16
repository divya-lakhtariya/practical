#include<stdio.h>
main()
{

int a=30,b=20,c=10;

printf("enter the three numbers:");

scanf("%d %d %d",&a,&b,&c);

if(a>b)

{

if(a>c)

printf("greatest number is %d",a);

else

printf("greatest number is %d",c);

}

else
{

if(b>c)

printf("greatest number is %d",b);

else

printf("greatest number is %d",c);

}

}


