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
