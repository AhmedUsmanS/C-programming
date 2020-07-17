	#include<stdio.h>
	
void main(){
	
	float a;
	printf(" Enter your desired number\n");
	scanf("%f",&a);
	
	if (a>0)
	{
		printf ("The number you entered is a Positive number");
	}
	else if (a<0)
	{
		printf ("The number you entered is a negative number");
	}
	else if (a==0)
	{
		printf ("The number you have entered is 0");
	}
}
