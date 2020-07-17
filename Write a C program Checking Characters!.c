//Any character is entered through the keyboard,
// write a program to determine whether the character entered is a capital letter, 
// a small case letter, a digit or a special symbol. 
// The following shows the range of ASCII values for various characters.
//0-9 (48-57),
//A-Z (65-90),
//A-z (97-122)


   #include<stdio.h>
int main (){
	int a;
	printf("Enter Number to determine Number entered Exits in ACII code as a capital letter, a small case letter or a digit!\n");
	scanf("%d", &a);
if (a>=48 && a<=57)
{
	printf("Digit!");	
}
else if (a>=65 && a<=90)
{
	printf("Capital Letter!");	
}
else if (a>=97 && a<=122);
{
	printf("Small Letter!");	
}
}
