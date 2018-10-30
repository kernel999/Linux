#include<stdio.h>
main()
{
	float principal,rate,years,si;
	printf("enter principal",principal);
	scanf("%f",&principal);
	printf("enter rate:",rate);
	scanf("%f",&rate);
	printf("enter years",years);
	scanf("%f",&years);
	si=(principal*years*rate)/100;
	printf("si is %f\n",si);
}
	
