#include<stdio.h>
int main()
{
	int gross_salary,basic,da,ta;
	printf("enter basic salary : ");
	scanf("%d",&basic);
	
	da=(10*basic)/100;
	ta=(12*basic)/100;
	
	gross_salary=basic+da+ta;
	
	printf("\ngross salary : %d",gross_salary);
	
	return 0;
}
