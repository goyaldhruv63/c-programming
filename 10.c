/*find quotient and reminder input is 2 numbers*/
#include<stdio.h>
int main()
{
	int A,B,quotient=0,remainder=0;
	printf("enter two numbers A and B : \n");
	scanf("%d%d",&A,&B);
	
	quotient=A/B;
	remainder=A % B;
	
	printf("quotient when A/B is: %d\n",quotient);
	printf("remainder when A/B is: %d",remainder);
	
	return 0;
}
