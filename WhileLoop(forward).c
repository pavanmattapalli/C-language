#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		++i;
	}
	return 0;
}

