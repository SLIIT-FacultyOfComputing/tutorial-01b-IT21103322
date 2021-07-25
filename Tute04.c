#include<stdio.h>
int main (void)
{
int no1, no2;
 printf("Enter a value for no 1 : ");
 scanf("%d", &no1);
 printf("Enter a value for no 2 : ");
 scanf("%d", &no2);
 
 printf("minimum = %d\n ", minimum(no1, no2));
 printf("maximum = %d\n ", maximum(no1, no2));
 printf("multiply = %d\n ", multiply(no1, no2));
 return 0;	
		
}
int minimum(int no1,int no2)
{
if(no1<no2)	
	return no1;
else
	return no2;		
}

int maximum(int no1,int no2)
{
if(no1>no2)	
	return no1;
else
	return no2;	
	
}
int multiply(int no1,int no2)
{
	
	
	return no1 * no2;
}
	



