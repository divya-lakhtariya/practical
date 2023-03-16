#include<stdio.h>
main()
{
	int n,b;
	printf("enter num of value:");
	scanf("%d" ,&n);
	do
	{
		printf("\n %d*%d =%d" ,n,b,n*b);
		
		b++;
		
	}
	while(b<=10);
}
