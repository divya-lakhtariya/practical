#include<stdio.h>
main()
{
	 int s1, s2, s3 ,s4,i;
	 
	 
	 printf("Enter marks of 4 subjects\n");  
    scanf("%d %d %d %d ", &s1, &s2, &s3, &s4); 
    i= (s1 + s2 + s3 + s4) / 4;

    if(i>=70)  
        printf("You are a first class\n");  
    else if(i>=60)  
        printf("you are second class\n");  
    else if(i>=35)  
        printf("you are pass class\n");  
    else if(i<35)  
           printf(" you are fail\n");
}

