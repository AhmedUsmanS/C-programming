   #include<stdio.h>
int main (){
	int year;
	printf("Enter the numner of years to get the NUMBER of LEAP YEARS!\n");
	scanf("%d", &year);
if (year%4==0)
{
	printf("It is a Leap Year!!");
}
else if (year%400==0)
{
	printf("It is a Leap Year!!");
}
else if (year%100)
{
	printf("It is not a leap year!");
}
}
