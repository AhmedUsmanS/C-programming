//The length of a month varies from 28 to 31 days. 
//In this Lab you will create a program that reads the number of a month from the user . 
//Then your program should display the number of days in that month. Display “28 or 29 days” for February so that leap years are addressed.


    #include<stdio.h>
int main(){
	char a[1];
		printf("This program will determine whether your input letter is a Vowel or not!\n");
		scanf("%s", &a);
			
			if ((strcmp(a,"a")==0))
			{
				printf("Vowel!");
			}
			
			else if ((strcmp(a,"e")==0))
			{
				printf("Vowel!");
			}
			
			else if ((strcmp(a,"i")==0))
			{
				printf("Vowel!");
			}
			
			else if ((strcmp(a,"o")==0))
			{
				printf("Vowel!");
			}
			
			else if ((strcmp(a,"b")==0))
			{
				printf("Vowel!");
			}
			
			else if ((strcmp(a,"y")==0))
			{
				printf("sometimes y is a vowel, and sometimes y is a consonant!");
			}
			
			else
			{
				printf("It is a Constant!");
			}
}
