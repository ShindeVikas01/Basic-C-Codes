// Find vowel given string

#include<stdio.h>
int main()
{
	int count = 0, vowels = 0;
	char str[10],c;
	
	printf("Enter the string=");
	scanf("%s",&str);
	
	//Condtion for Vowels finding
	printf("The string present Vowels=");
	while(str[count] != '\0')
	{
   	  c = str[count];
   	  
   	  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
		{
	   	  	vowels++;
	   	  	printf("%c", c);
	   	}
   	  count++;
   	}

   	printf("\nNUMBER OF VOWELS: %d \n", vowels);
   	
	return 0;
}