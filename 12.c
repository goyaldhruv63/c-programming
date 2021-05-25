/*find area of rectangle*/
#include<stdio.h>
int main()
{
	int length,breadth,area;
	printf("\n enter the length of rectangle: ");
	scanf("%d",&length);
	printf("\n enter the breadth of rectangle: ");
	scanf("%d",&breadth);
	
	area=length*breadth;
	printf("\narea of rectangle : %d",area);
	
	return 0;
}
