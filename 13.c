/*swap two numbers using third variable*/
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("\n type any two numbers to swap:\n ");
	
	printf("\n A = ");
	scanf("%d",&a);
	
	printf("\n B = ");
	scanf("%d",&b);
	
	printf("\n numbers before swapping \n");
	printf("\n A=%d \t B=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\n numbers after swapping \n");
	printf("\n A=%d \t B=%d",a,b);
	
	
	
}
