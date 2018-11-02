#include <stdio.h>
#include <stdlib.h>  
int main()
{
	double num;
    	while(1) {
     		printf("Enter no.: ");
    		scanf("%lf", &num);
     
    		if(num > 999999) {
    			printf("More than 6 digits number is not allowed. Please try again\n");
    			
    		}
    		else
    			break;
    	}
     
    	printf("You are done.\n");
     
    	return 0;
}
/*
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
*/
