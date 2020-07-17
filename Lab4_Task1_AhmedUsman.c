   #include <stdio.h>
   int main (){
   	
   	 int a, b, c;
   	 printf("Enter your desired 3 numbers \n");
   	 scanf("%d",&a);
   	 scanf("%d",&b);
   	 scanf("%d",&c);
   	 
   	if (a==b || a==c || b==c)
	{
		printf("You Entered Two Same Numbers!");
	}

   	else if (a>b && a>c)
   	{
   	 	printf("a is the greatest number");
	}
	else if (b>a && b>c)
	{
		printf("b is the greatest number");
	}
	else if (c>a && c>b)
	{
		printf("c is the greatest number");
	}

   }
