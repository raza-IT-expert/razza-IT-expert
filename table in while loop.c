#include<stdio.h>
main()
{
	int count, tab;
	printf("enter table number");
	scanf("%d",&tab);
	count=1;
	while(count<=10)
	{
		printf("\n%d*%d=%d",tab,count,tab*count);
		count= count+1;
	}
}
