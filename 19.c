/*calculate aggregate of student marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	printf("\nenter marks in 5 subjects: ");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	aggr=m1+m2+m3+m4+m5;
	
	printf("\n aggr marks=%d",aggr);
	
	return 0;
}
