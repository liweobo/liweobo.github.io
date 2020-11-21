#include<stdio.h>
/*int main () 
{
	int a,b,i,n;
	scanf("%d%d",&a,&b);
		for(i=a;i>=1;i--)
	   	{   
		if(a%i==0&&b%i==0)
		{
			printf("%d\n",i);
			break;
		} 
		} 
     n=a*b/i;
     printf("%d\n",n);

	     return 0;
 }*/
 
 
 
 
 
 /*int main()
 {
 	double n,i,s,sum,p;
 	scanf("%lf",&n);
 	sum=1;
 	p=0;
 	for(i=1;i<=n;i++)
 	{for(s=i;s>=1;s--)
 	sum=sum*s;
 	p=p+sum;
 	sum=1;
	 }
	 n=p;
	 printf("%.2lf\n",n);
	 return 0;
 }*/
 
 
 
 /*int main()
 {
 	int n,i,s,c,j;
 	scanf("%d",&n);
 	s=0;
 	j=n;
 	for(;j>100;j--)
 	{for(i=2;i<j;i++)
	 if(j%i==0){
		 s=s+1;
		  break;
	 }
}
 c=n-100-s;
printf("%d\n",c);
	 return 0;
 }*/
 
 
 
 
 
 
 
 
 
 /*int main()
 {
 	int n,i,sum;
 	scanf("%d",&n);
 	sum=0;
 	for(i=1;i<=n;i++)
 	{if(i%7==0)sum=sum+i;
	 }
	 printf("%d\n",sum);
	 return 0;
 }*/




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
 
 int main()
 {
 	int i,a[10],max,m;
 	for(i=0;i<=9;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<=8;i++)
 	{
	 
	 if(a[i+1]>a[i])
	 {
	 m=a[i+1];
	 a[i+1]=a[i];
	 a[i]=m;
     }
     max=a[i];
 }
 printf("%d\n",max);
 return 0;
}

