//Bonanza introduces up to 70% off on summer collection in their outlets.
//If the purchased amount of a customer is greater than 6000 rupees,
//less than and equal to 6000 rupees and equal to 3000 rupees then he/she can avail 70% discount,
//50% discount and 30% discount respectively. Write a C code to the solution of the above scenario.


 #include<stdio.h>
 
 int main (){
 	int a;
 	printf("Enter the purchased amount of the customer\n");
 	scanf("%d", &a);
 	
 	if (a<3000)
 	{
 		printf("No discount!");
	}
 	
 	else if (a>6000)
 	{
 		printf("70 Percent off is Granted to the customer!");
	}
	else if (a<=6000 && a>3000)
 	{
 		printf("50 Percent off is Granted to the customer!");
	} 
	else if (a==3000)
 	{
 		printf("30 Percent off is Granted to the customer!");
	}
}
