   #include<stdio.h>
   int main (){
   	int a;
   	float r, h, l, b, Ac, At, Ar;
   	printf("Press \"1\" to find area of Circle\n");
   	printf("Press \"2\" to Find Area of Triangle\n");
   	printf("Press \"3\" to Find Area of Rectangele\n");
   	scanf("%d",&a);
   	
   	switch (a){
	   
   	case 1:
	    
   		printf("Enter the radius of the circle!\n");
   		scanf("%f", &r);
   		Ac = 3.142 * r * r;
   		printf("\nThe area of the cirlce is %f", Ac);
		break;
	case 2:
	    
   		printf("Enter the base and height of the Triangle!\n");
   		scanf("%f", &h);
   		scanf("%f", &b);
   		At = 0.5 * b * h;
   		printf("\nThe area of the triangle is %.2f", At);
		break;
	case 3:
	    
   		printf("Enter the length and base of the Rectangle!\n");
   		scanf("%f", &l);
   		scanf("%f", &b);
   		Ar =  b * l;
   		printf("\nThe area of the Rectangle is %f", Ar);
		break;
	default:
		printf("Error!");

}
   	
   }
