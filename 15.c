/*calculate simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float p,t,r,si,ci;
	printf("enter  principal amount (p): ");
	scanf("%f",&p);
	printf("enter time in year(t): ");
	scanf("%f",&t);
	printf("enter rate in percent(r): ");
	scanf("%f",&r);
	
	si=(p*t*r)/100.0;
	ci=p * (pow(1+r/100, t) - 1);
	
	printf("simple interest=%0.3f\n",si);
	printf("compound interest=%0.3f",ci);
	
	return (0);
}
