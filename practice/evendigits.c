#include<stdio.h> 

main()
{
	int num,rem,odd,even,digit;
        printf("Enter an six digit integer number: ");
        scanf("%d",&num);
        
        while(num>0)
	{
        digit = num % 10;
        num = num / 10;
        rem = digit % 2;
        if(rem != 0)
        odd=(odd*digit);
        else
        even=even+digit;
        }

        printf("The multiplication of Odd digits present is %d\n",odd); 
        printf("The sum of even digits present is %d\n",even); 
 } 
