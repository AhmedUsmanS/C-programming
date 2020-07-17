 #include<stdio.h>
 int main(){
 	int a;
 	float b, c, d, e, f, g;
 	
    /* Finding Unit charges */
    
 	printf("Enter Unit value\n");
 	scanf("%d", &a);
 	
 	if (a<=0)
 	{
 		printf("Enter Valid Unit value");
	}
	else if (a>0 && a<=50)
	{
		b = a * 0.50;
		f = b * 0.2;
		g = b + f;
		printf("Your Electricity Bill is: Rs %.3f ", g);
		
	}
 	else if (a>50 && a<=150)
	{
		c = a * 0.70;
		f = c * 0.2;
		g = c + f;
		printf("Your Electricity Bill is: Rs %.3f", g);
	}
	else if (a>150 && a<=250)
	{
		d = a * 1.20;
		f = d * 0.2;
		g = d + f;
		printf("Your Electricity Bill is: Rs %.3f", g);
	}
	else if (a>250)
	{
		e = a * 1.50;
		f = e * 0.2;
		g = e + f;
		printf("Your Electricity Bill is: Rs %.3f", g);
	}
	
 }
 
