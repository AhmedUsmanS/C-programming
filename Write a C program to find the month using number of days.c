//The length of a month varies from 28 to 31 days. 
//In this Lab you will create a program that reads the number of a month from the user . 
//Then your program should display the number of days in that month. Display “28 or 29 days” for February so that leap years are addressed.   
   
   
   
   #include<stdio.h>
   
int main (){
	int a,b;
	printf("Enter th number of month\n");
	scanf("%d", &a);
	
		switch(a)
		{
			case 1:
				printf("The number of Days in January is 31");
			break;
			
			case 2:
				printf("Enter the year!\n");
				scanf("%d", &b);
					if (b%4==0)
					{
						printf("%d is a Leap Year!\nThe month is February having 29 Days", b);
					}
					else
					{
						printf("%d is not a Leap year!\nThe month is February having 28 Days", b);
					}
			break;

			case 3:
				printf("The number of Days in March is 31");
			break;

			case 4:
				printf("The number of Days in Aprl is 30");
			break;

			case 5:
				printf("The number of Days in May is 31");
			break;

			case 6:
				printf("The number of Days in June is 30");
			break;

			case 7:
				printf("The number of Days in July is 31");
			break;

			case 8:
				printf("The number of Days in August is 31");
			break;

			case 9:
				printf("The number of Days in September is 30");
			break;

			case 10:
				printf("The number of Days in October is 31");
			break;
			
			case 11:
				printf("The number of Days in November is 30");
			break;
			
			case 12:
				printf("The number of Days in December is 31");
			break;
			
			default:
				printf("Enter a valid Year number!");
			


		 }
}
