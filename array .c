#include<stdio.h>
main()
{
	int a[10],i,j,temp;
	printf("\n enter array element:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
    {
		for(j=i+1; j<5; j++);
	  {
    	if(a[i]>a[j])
    	{
    		temp=a[i];
    		a[i]=a[j];
    		a[j]=temp;
		}
      } 
    
    }
    printf("array element are");
    for(i=0; i<5;i++)
    {
    	printf("%d ",a[i]);
	}
	getch();
}

