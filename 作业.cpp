#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=9;i++)
	{
		for(j=i,n=9-j;j<=9;j++,n--)
		{
		
		printf("%d*%d=%d\t",i,j,i*j);
		if(n==0)printf("\n");
	}
}
return 0;
}
