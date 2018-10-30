#include<stdio.h>
main()
{
	float radius,area,perimeter;
	float PI=3.14;

	printf("enter the radius of circle:");
	scanf("%f",&radius);
	printf("radius of circle is:%f\n",radius);
	// area of circle
	area = PI*(radius*radius);
	printf("area of circle is %f\n",area);
	//perimeter of circle
	perimeter=2*PI*radius;
	printf("perimeter of circle is %f\n",perimeter);
}
