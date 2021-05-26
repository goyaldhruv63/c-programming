/*calculate distance between two cities in km and change it into meters,feets and inches*/
#include<stdio.h>
int main()
{
	int distance;
	float meter;
	float feets;
	float inches;
	
	printf("enter the distance between jhalawar to kota(in KM): ");
	scanf("%d",&distance);
	
	meter = distance* 1000;
	feets = distance* 3280.84;
	inches = distance* 100000;
	
	printf("meter = %f\n",meter);
	printf("feets=%f\n",feets);
	printf("inches=%f\n",inches);
	
	return 0;
	
	}
