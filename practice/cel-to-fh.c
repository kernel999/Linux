#include<stdio.h>
int main()
{
	float celsius, fahrenheit;

	/* Input temperature in celsius */
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	printf("Temperature entered in Celsius = %f\n",celsius);
	
	/* celsius to fahrenheit conversion formula */
	fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temperature in fahrenheit = %f\n",fahrenheit);


}
