   #include<stdio.h>
int main(){
	float a,b,c,d,e;
	float p;
printf("Enter the obtained Marks out of 100\n");

printf("English\n");
scanf("%f", &a);

printf("Chemistry\n");
scanf("%f", &b);

printf("Urdu\n");
scanf("%f", &c);

printf("Mathematicss\n");
scanf("%f", &d);

printf("Computer\n");
scanf("%f", &e);

p = ( a + b + c + d + e ) / 5;
printf("Percentage= %f \n",p);

if (p>=90)
{
	printf("Grade A");
}
else if (p>=80)
{
	printf("Grade B");
}
else if (p>=70)
{
	printf("Grade C");
}
else if (p>=60)
{
	printf("Grade D");
}
else if (p>=40)
{
	printf("Grade E");
}
else if (p<40)
{
	printf("Grade F");
}


}
