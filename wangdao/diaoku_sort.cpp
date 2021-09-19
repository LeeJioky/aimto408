/*利用自带库函数进行排序（升序），注意用法和cmp的定义*/
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int cmp(const void*a,const void*b)
{
	return (*(int *)a-*(int *)b);  //首先要将空指针转换成我们所需要的指针数据类型，此处应为int型，然后再取址 
}								   //如果要降序a、b互换即可 
int main()
{
	int n;
	int buf[10000];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&buf[i]);
		}
		qsort(buf,n,sizeof(int),cmp);  //
		for(int i=0;i<n;i++)
		{
			printf("%d	",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
