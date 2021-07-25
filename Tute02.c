#include<stdio.h>
int main(void)
{
	float distance , amount = 0;//declare variables
	printf("Input the distance :");//Display message
	scanf("%f",&distance);//read value
	
	if(distance <= 30)
	
	{
		amount = distance * 50.0;
		
	}
	else
	{
		
		amount = 30 *50.0 +  (distance - 30) * 40;
	}
	printf("Total amount is %.2f",amount);
	
	
	return 0;
	
	
	
	
}