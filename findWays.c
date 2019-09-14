#include<stdio.h>
long fact(int n)
{
	long f=1;
	int i=0;
	for(i=n;i>0;i--)
		f=f*i;
	return f;
}
int findWays(int r, int p)
{
	if(r>=1 && r<=1000 && r>=p)
		return fact(r)/(fact(p)*fact(r-p));
	return 0;
}
int main(int argc, char *a[])
{
	int n,i,ways;
	scanf("%d",&n);
	if(n>=1 && n<=10)
	{
		int arr[n][2];
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&arr[i][0],&arr[i][1]);
		}
		for(i=0;i<n;i++)					
			printf("%ld\n",findWays(arr[i][0],arr[i][1]));		
	}	
	return 0;
}
