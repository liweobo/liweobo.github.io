/*#include<stdio.h>
int main()
{
	int i,n,a,b,c,sum;
	scanf("%d",&n);
	sum=0;
	for(i=100;i<=n;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		{
			sum=sum+1;
		printf("%d\n",i);}
	}
	printf("%d\n",sum);
return 0;
 }*/
 /*#include<stdio.h>
 int main()
 {
 	int i,n,j,sum;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		sum=0;
 		for(j=1;j<i;j++)
 			if(i%j==0)
 			sum=sum+j;
 			if(sum==i)
			printf("%d\n",i);
	 }
	 return 0;
 }*/
/* #include<stdio.h>
 int main()
 {
 	int n,m,sum;
 	scanf("%d",&m);
 	for(n=1;;n++)
 		{
		 sum=sum+n;
 		if(m>sum&&m<sum+n+1)
 		{
 		printf("%d\n",n);
 		break;
 	}
 }
 return 0;
}*/
/*#include<stdio.h>
int main()
{
	int m,n;
	double k,a,b,sum;
	scanf("%d%d",&m,&n);
	a=0;
	b=0;
	sum=0;
	for(k=1;k<=m;k++)
	a=a+k+k*k;
	for(k=1;k<=n;k++)
	b=b+1/k+(1/k)*(1/k);
	sum=a+b;
	printf("%.2lf\n",sum);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int n,i;
	double y;
	scanf("%d",&n);
	y=2;
	for(i=1;i<=n;i++)
	y=y-1.0/i;
	printf("%.2lf\n",y);
	return 0;
}*/
/* #include<stdio.h>
 int main()
 {
 	int i;
 	double n,s;
 	scanf("%lf",&n);
 	s=n;
 	for(i=1;i<=10;i++)
 	{
 		n=n/3;
		s=s+2*n;
	 }
	 printf("%.2lf\n",s);
	 return 0;
 }*/

