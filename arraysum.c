#include<stdio.h>
void main()
{
	const int size=5;
	int a[5];
	int i;
	int sum=0;
	char name[20];
	scanf("%s",&name);
	printf("%s\n",name);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d\n",sum);
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		printf("%d\n",name[i]);
	}
	getch();
}
