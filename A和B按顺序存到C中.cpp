//将两个有序数组合并为一个有序数组 
#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[m];
	int c[n+m];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;j=0;
	int k=0;
	while(i<=(n)&&j<=(m))//数组长度是他的标号 
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}	
	}
	while(i<n)
	{
		c[k++]=a[i++];
	 } 
	while(j<m)
	{
		c[k++]=b[j++];
	}
	int t;
	printf("a数组为："); 
	for(t=0;t<n;t++)
	{
		printf("%d ",a[t]);
	}
	printf("\n"); 
	printf("b数组为：");
	for(t=0;t<m;t++)
	{
		printf("%d ",b[t]);
	 } 
	printf("\n"); 
	printf("c数组为：");
	for(t=0;t<(m+n);t++)
	{
		printf("%d ",c[t]);
	}
}
