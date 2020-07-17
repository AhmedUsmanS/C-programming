  #include<stdio.h>
int main (){
	int a = 0;
	printf("Enter the Number of Sides to get the name of polygon\n");
	scanf("%d", &a);
	
		switch(a)
		{
			case 3:
				printf("Name of the plygon is \" Triangle \"");
			break;
			
			case 4:
				printf("Name of the plygon is \" Quadrilateral \"");
			break;
			
			case 5:
				printf("Name of the plygon is \" Pentagon \"");
			break;
			
			case 6:
				printf("Name of the plygon is \" hexagon \"");
			break;
			
			case 7:
				printf("Name of the polygon is \" Heptagon \"");
			break;
			
			case 8:
				printf("Name of the polygon is \" Octagon \"");
			break;
			
			case 9:
				printf("Name of the polygon is \" Nonagon \"");
			break;
			
			case 10:
				printf("Name of the polygon is \" Decagon \"");
			break;			
			
			case 12:
				printf("Name of the polygon is \" Dodecagon \"");
			break;
			
			default:
				printf("Wrong Input!");
		}
}
