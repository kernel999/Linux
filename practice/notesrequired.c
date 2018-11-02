#include<stdio.h>
main()
{
	int n,choice,notes;
	printf("enter total amount in RS:");
	scanf("%d",&n);
//	printf("enter value of note u want to start:");
//	scanf("%d",&choice);
	if(n<=0)
	printf("enter correct amount");
	else{
	printf("enter value of note u want to start:");
	scanf("%d",&choice);
	
	switch(choice)
		{
		default:
			printf("enter only valid values:");
			break;
		case 100:
			notes=n/100;
			printf("no. of 100 notes required are:%d\n",notes);
			n=n%100;
			break;
		case 50:
                        notes=n/50;
                        printf("no. of 50 notes required are:%d\n",notes);
                        n=n%50;
			break;
		case 20:
                        notes=n/20;
                        printf("no. of 20 notes required are:%d\n",notes);
                        n=n%20;
			break;
		case 10:
                        notes=n/10;
                        printf("no. of 10 notes required are:%d\n",notes);
                        n=n%10;
			break;
		}
	}
printf("\n");
}
