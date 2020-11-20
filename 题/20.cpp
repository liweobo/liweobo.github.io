#include<stdio.h>
/*
#define pi 3.1415926
int main()
{
	double r,s,c;
	scanf("%lf",&r);
	if(r<=0)printf("error!\n");
	c=2*pi*r;
	s=pi*r*r;
	printf("%.2lf%.2lf\n",c,s);
	return 0;
 } 
 */
 /*
 #include<math.h>
 int main()
 {
 int y,x;
 scanf("%d",&x);
 if(x<1)y=x*x+2*x+sin(x);
 else if(x>=1&&x<=10)y=2*x-1;
 else y=sqrt(2*x*x*x-11);
 printf("%d\n",y);
 return 0;
}
 */
 /*
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	if(a>=1&&a<=20)printf("%d\n",a*a*a);
 	else printf("-1\n");
 	return 0;
 }
 */
 /*
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	if(a>=1&&a<=12)
 	{
 		if(a==1||3||5||7||8||10||12)printf("31\n");
 		else if(a==2)printf("28\n");
 		else printf("30\n");
	 }
	 else printf("error!\n");
	 return 0;
 }
 */
 /*
#include<math.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(a!=0)
	{
		if(d>0)printf("2\n");
		else if(d==0)printf("1\n");
		else printf("0\n");
	}
	else printf("error!\n");
	return 0;
}
*/
/*#include<math.h>
int main()
{
	int A,B,c,d,m,n;
	scanf("%d%d",&A,&B);
	c=A+B;
	d=A-B;
	m=(int)sqrt((double)c);
	n=(int)sqrt((double)d);
	if(A>B)
	{if(m*m==A+B&&n*n==A-B)
	printf("1\n");
	else printf("0\n");
	}
	else printf("error\n");
	return 0;
}*/
/* int main ()
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
 /*#include<math.h>
 int main()
 {
 	double n,i,sum;
 	sum=0;
 	for(i=1,n=1;fabs(i/n)>=1e-6;n=n+2,i=-1*i)
 	sum=sum+i/n;
 	sum=4*sum;
 	printf("%lf\n",sum);
 	return 0;
 }*/
/* int main()
 {
 	int n,i;
 	scanf("%d",&n);
 	for(i=2;i<n;i++)
 	if(n%i==0)break;
 	if(i<n)printf("是素数\n");
 	else printf("不是素数\n");
 	return 0;
 }*/
/* int main()
 {
 	double d;
 	double a,b;
 	a=2.0;
 	b=3.0;
 	d=b/a;
 	printf("%lf\n",d);
 	
 	return 0;
 }*/
 /*int main()
 {
 	int d;
 	double a,b;
 	a=2;
 	b=5;
 	d=b/a;
 	printf("%d\n",d);
 	return 0;
 }*/
 /*int main()
 {
 	char c;
 	c='c';
 	printf("%d\n",c);
 	return 0;
 }*/
/* int main()
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
 	int n,i,s,c;
 	scanf("%d",&n);
 	s=0;
 	c=n;
 	for(;n<=1000;n++)
 	{for(i=2;i<n;i++)
 	{
	 if(n%i==0){
		 s=s+1;
		  break;
    
 	 }	 
	 }
}
 c=1000-c-s;
printf("%d\n",c);
	 return 0;
 }*/
/* int main()
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
 /*int main()
 {
 	int a,b,c,d,n,i,s;
 	scanf("d",&d);
 	d=0;
 	for(i=100;i<=n;i++)
 	{a=i/100;
 	b=i%100/10;
 	c=i%10;
 	s=a*a*a+b*b*b+c*c*c;
 	if(s==i)d=d+1;
 	printf("%d\n",)
	 }
 	
	 }
 }*/
/* int main()
 {
 	int n,i,sum,p;
 	scanf("%d",&n);
 	sum=0;
 	for(i=1;i<=n;i++)
 	{for(p=1;p<i;p++)
	 if(i%p==0)
	 
	 sum=sum+p;
 	if(sum==i)printf("%d\n",i);
}
 return 0;
 }*/
 /*int main()
 {
 	int i,n,a,b,s;
 	scanf("%d%d",&a,&b);
 	for(i=a;i>=1;i--)
 	{
 		if(a%i==0&&b%i==0){
 		
		 printf("%d\n",i);
		 	break;
		 }
	 }
	 s=a*b/i;
	 printf("%d\n",s);
	 return 0;
 }
 */
