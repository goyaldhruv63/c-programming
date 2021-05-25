/*convert temp fahrenheit to celsius*/
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\n enter temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit - 32)*5/9;
	printf("\ncelsius = %.3f",celsius);
	
	return 0;
}
