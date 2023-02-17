// Program for check user name and password using string function

#include<stdio.h>
#include <string.h>
int main()
{
	int cmpuser,cmppass,length;
	char user1[50],password1[20],user,password[20];
	//char user="Admin";
	//char password="Admin1234";
	
	//Get user name and password from user
	printf("Enter User Name:");
	scanf("%s",&user1);
	printf("\nEnter Password:");
	scanf("%s",&password);
	
	// string function for check enter user name,password length and password
	cmpuser =strcmp("Admin",user1);
	length=strlen(password);
	cmppass= strcmp("Admin1234",password);
	
	// Conditions to check user name and password 
	if(cmpuser==0 && cmppass==0)
	{
		printf("\nWelcome and login successfull\n");
	}
	else if(length<8)
	{
		printf("\nPassword Length is less than 8charachter\n");
	}
	else if(cmpuser!=0 && cmppass==0)
	{
		printf("\nEnter wrong user name\n");
	}
	else if(cmpuser==0 && cmppass!=0)
	{
		printf("\nEnter wrong password\n");
	}
	else if(cmpuser!=0 && cmppass!=0)
	{
		printf("\nEnter wrong user name and password\n");
	}
	
	return 0;
}