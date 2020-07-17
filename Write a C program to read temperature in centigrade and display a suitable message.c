   #include<stdio.h>
int main () {
	
	int a;
	printf("Enter the Temperate \n");
	scanf("%d", &a);
if (a<0)
{
	printf("Freezing Weather");
}
else if (a>=0 && a<10)
{
	printf("Very Cold Weather");
}
else if (a>=10 && a<20)
{
	printf("Cold Weather");
}
else if (a>=20 && a<30)
{
	printf("Normal Weather");
}
else if (a>=30 && a<40)
{
	printf("Its Hot");
}
else if (a>=40)
{
	printf("Its Very Hot");
}
}
