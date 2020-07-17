   #include<stdio.h>
int main (){
	double a, b, c, d;
	
	printf("The employees are ONLY rated with points 0, 0.1, 0.2, 0.3, 0.4 and 0.5\n");
	printf("Enter the Rating of the Emplyee\n");
	scanf("%lf", &a);
	
	if (a<0 || a>0.5)
	{
		printf("You entered Wrong Rating");
	}
	else if (a==0)
	{
		printf("No Performance\n");
		printf("Suspended");
	}
	else if (a==0.1 || a==0.2)
	{
		printf("Poor Performance\n");
		printf("Warning! improve your perfomance!");
	}
	else if (a==0.3)
	{
		b = 6000 * 0.3;
		printf("Average Performance\n");
		printf("You are awarded the following bonus: %lf", b);
	}
	else if (a==0.4)
	{
		c = 6000 * 0.4;
		printf("Good Performance\n");
		printf("You are awarded the following bonus: %lf", c);
	}
	else if (a==0.5)
	{
		d = 6000 * 0.5;
		printf("Outstanding Performance\n");
		printf("You are awarded the following bonus: %lf", d);
	}
}
