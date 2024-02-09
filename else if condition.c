#include<stdio.h>
main()
{
	int marks;
	printf("/n give student marks");
	scanf("%d",& marks);
	if (marks >=80 && marks<=100)
	printf("/n grade is A1");
	else if(marks>=70 && marks<=79)
	printf("/n grade is A");
	else if (marks>=60 && marks<=69)
	printf("/n grade is B");
	else if (marks>=50 && marks<=59)
	printf("/n grade is C");
	else printf("/n fail");
}
