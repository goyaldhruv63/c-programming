/*calculate difference between 2 numbers*/
#include<stdio.h>
int main()
{
	int a,b,sub;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sub=a-b;
	printf("\ndifference between %d & %d =%d",a,b,sub);  
	
	return 0;
}
