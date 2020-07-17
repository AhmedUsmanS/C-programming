   #include<stdio.h>
int main (){
	int z;
	double a, b, c, d;
	
	printf("Enter rating star shown below to get to know about performance and award!\n");
   	printf("press \"1\" for 0 Rating\n");
   	printf("press \"2\" for 0.2 Rating\n");
   	printf("press \"3\" for 0.3 Rating\n");
   	printf("press \"4\" for 0.5 Rating\n");
   	scanf("%d", &z);
   	
   		switch (z){
   			
   			case 1:
   				printf("No Performance!\n");
   				printf("Suspended!\n");
   			break;
   			
   			case 2:
   				printf("Poor Performance\n");
		        printf("Warning! improve your perfomance!");
   			break;
   			
   			case 3:
   				b = 6000 * 0.3;
				printf("Average Performance\n");
				printf("You are awarded the following bonus: %lf", b);
   			break;
   			
   			case 4:
   				d = 6000 * 0.5;
				printf("Outstanding Performance\n");
				printf("You are awarded the following bonus: %lf", d);
   			break;
   			
		}
   	
}
