 #include<stdio.h>
 
 int main(){
 	
 	int a;
 	printf("Enter your desired number\n");
 	scanf("%d", &a);
 	
 	if ( a%11==0 && a%5==0)
	 {
 	    printf("Your number is divisible by 5 and 11!" );	
	 }
	 
	 else if (a%11==0) 
	 {
	 	printf("Your number is divisble by 11 Only!");
	 }
	 
	 else if (a%5==0)
	 {
	 	printf("Your number is divisible by 5 Only!");
	 }
	 
	 else
	 {
	 	printf("Your number is neither divisible by 11 nor 5!");
	 }
 }
