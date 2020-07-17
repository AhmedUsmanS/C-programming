  #include<stdio.h>
int main(){
	char a[1];
	int b, c, d, e, f, g, h, i, j, k , l , m , n , o, p;
	float z , y;
	
	/*Asking the user to input whether done Fsc or Cambridgeboard*/
	
	printf("Enter your Medical Entrance test Requirements as asked!\n");
	printf("Press F (For FSC)\nPress C (for O/A Levels)\n\n");
	scanf("%s", &a);
	
	/* For FSC */

    if ((strcmp(a,"F")) == 0)
    {
    	printf("\nEnter your FSC Percentage! \n");
    	scanf("%d",&b);
    	
    	if (b >= 80)
    	{
    		printf("Eligible!\n\n");
		}
		else if ( b < 80 )
		{
			printf("Not Eligile!\n");
			return 9;
		}	
	}
	else if ((strcmp(a,"C")) == 0)
	{
		/* Calculating O levels Marks */
		
		printf("\nEnter your O Levels Marks as indicated in the Criteria Below!\n\nA*=90\nA=85\nB=75\nC=65\nD=55\n\n");
    	scanf("%d",&c);
    	scanf("%d",&d);
    	scanf("%d",&e);
    	scanf("%d",&f);
    	scanf("%d",&g);
    	scanf("%d",&h);
    	scanf("%d",&i);
    	scanf("%d",&j);
    	
    	z = (c + d + e + f + g + h + i + j) * 1.125 ;
    	
    	printf("\nYour O levels marks are %f \n", z);
    	
    	/* Calculating A levels Marks*/
    	
    	printf("\nNow Enter your your A level Marks according to the same above criteria!\n\n");
    	scanf("%d",&k);
    	scanf("%d",&l);
    	scanf("%d",&m);
    	
    	n = (k + l + m);
    	
    	printf("\nYour A levels marks are %d \n", n);
    	
    	/* Calculating total marks */
    	o= c + d + e + f + g + h + i + j + k + l + m;
		printf("\nYour Total Marks out of 1100 are: %d\n", o);
		
		y = ( o * 100) / 1100;
		printf("\nYour equivalence is %f", y);
	}
	
	    printf("\nEnter your MCAT Percentage below\n");
	    scanf("%d", &p);
	
	if (p>=85)
	{
		printf("You have been granted admission in Medical University!");
	}
	else if (p<85 && p>=75)
	{
		printf("You have been granted admission in Dental Medical College!");
	}
	else
	{
		printf("Sorry, You have not been granted admission!");
	}
}
 
