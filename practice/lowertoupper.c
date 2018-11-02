#include<stdio.h>
#include<ctype.h>
/*
main()  
{
	char ch;
	printf("enter a charecter:");
	scanf("%c",&ch);
	if(ch >='a' && ch <='z')//checking lowercase
	printf("charecter is lowercase \n",ch);
	else if(ch >='A' && ch <= 'Z')//checking uppercase
	printf("charecter entered is uppercase \n",ch);
	else
	printf("charecter entered by you is not valid");
}*/


int main()
{
  char Ch;
 
  printf("Please Enter any alphabet\n");
  scanf(" %c", &Ch);

  if (isalpha(Ch) )
   {  
     Ch = toupper(Ch); 
     printf ("Uppercase of Entered character is %c\n", Ch);
   }
  else
   {
     printf("Please Enter Valid Alphabet\n");
   }  
}
