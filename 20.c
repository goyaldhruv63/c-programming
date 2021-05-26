/*calculate the sum of first and last digit of given 4 bit number */
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter 4 bit number:");
	scanf("%d",&a);
	b=a/1000;
	printf("\n first digit : %d",b);
	c=a%10;
	printf("\n last digit : %d",c);
	sum=b+c;
	printf("\nsum:%d",sum);
	return 0;
	
}
