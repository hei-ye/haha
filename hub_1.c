#include <stdio.h>
int main()
{
	int a=1999;
	int b=2299;
	int i=0;
	int count=0;
	for(i=0;i<=31;i++)
	{
		if((((a^b)>>i)&1)==1)
			count++;
	}
	printf("%d\n",count);
	return 0;