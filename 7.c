#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,sub,mult;
	float div,avg;
	
	printf("input any two numbers seprated by comma : ");
	scanf("%d,%d",&num1,&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=(float)num1 / num2;
	avg=(float)(num1+num2)/2;
	
	printf("the sum of the given numbers : %d\n",sum);
	printf("the difference of the given numbers : %d\n",sub);
	printf("the product of the given numbers :%d\n",mult);
	printf("the quotient of the given numbers: %f\n",div);
	printf("avg=%.2f",avg);
	
	return 0;
	
}
