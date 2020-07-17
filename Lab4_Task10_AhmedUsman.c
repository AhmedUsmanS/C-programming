  #include <stdio.h>
  #include <stdlib.h>
  
  
  int main(){
     int a, b;
     int c=0;
  	printf("Enter the number you want to be guessed!\n");
  	scanf("%d", &a);
  	system("cls");
  	for (c=0;c<2;++c)
	{
  		printf("Enter your guessed number!\n");
  		scanf("%d", &b);
  	
	  	if (b < 0)
	  	{
	  		if (c < 1)
	  			printf("ONE MORE ATTEMPT! \n");
	  		else
	  			{
	  				printf("\n\nYou Guessed the wrong number dude!");
					printf("\nGAME OVER!");
					return;
				}
			  //c=c+1;
		}
		else if (b == a)
		{
			printf ("You Champion!\n");
			return;
		
		}
		else if (b > ( a + 10 ))
		{
			printf("Greater\n");
			return;
		}
		else if (  b > (a - 10) || b < (a + 10) )
		{
			printf("It Near! \n");
			return;
			
		}
		else
		{
		printf("\n\nYou Guessed the wrong number dude!");
		printf("\nGAME OVER!");
	    }
	}
}
