#include<stdio.h>
void swap(int *x,int *y)
{
	int *temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d,y=%d",*x,*y);
}
 main()
{
	int a=10,b=20;
	int *p,*q;
	
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
}
