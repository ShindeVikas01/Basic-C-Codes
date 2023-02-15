// Check password condition like Uppercase, Lowercase, Digit, Special character and password length

#include<stdio.h>
int main()
{
	int i,lower= 0,upper= 0,digit= 0,num=0,special=0;
    char pass[10];
    
    //user define function
    printf("Enter Password=");
    scanf("%s",&pass);
     
    for (i = 0; i < 10; i++) 
	{
        if (pass[i] >= 'a' && pass[i] <= 'z') 
		{
			lower++;
		}
        if (pass[i] >= 'A' && pass[i] <= 'Z')
		{
			upper++;
		}
        if (pass[i] >= '0' && pass[i] <= '9')
        {
        	digit++;
		}
		if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='^' || pass[i]=='&' || pass[i]=='*' ||
		pass[i]=='(' || pass[i]==')' || pass[i]=='{' || pass[i]=='}' || pass[i]=='[' || pass[i]==']' || pass[i]=='<' || pass[i]=='>' ||
		pass[i]=='~' || pass[i]=='`' || pass[i]==',' || pass[i]=='.' || pass[i]=='"' || pass[i]==':' || pass[i]=='!' || pass[i]==';' || 
		pass[i]=='-' || pass[i]=='_')
		{
			special++;
		}
		num++;
    }    
    
    if (lower> 0 && upper> 0 && digit> 0 && num>=7 && special>0) 
	{
        printf("\nPASSWORD FULLFILL ALL CONDITION.\n");
    }
    
    else if(num<8)
	{
	    printf("Pasword is not less than 8 character.\n");
	}
	
    else if(lower==0)
    {
        printf("\nPassword not enter any lower case charachter.\n");
	}
	
	else if(upper==0)
    {
        printf("\nPassword not enter any upper case charachter.\n");
	}
	
	else if(digit==0)
    {
    	printf("\nPassword not enter any digit.\n");
	}
	else if(special==0)
    {
        printf("Enter any special symbols");
	}
	return 0;
}