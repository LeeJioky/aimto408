/*�����Դ��⺯�������������򣩣�ע���÷���cmp�Ķ���*/
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int cmp(const void*a,const void*b)
{
	return (*(int *)a-*(int *)b);  //����Ҫ����ָ��ת������������Ҫ��ָ���������ͣ��˴�ӦΪint�ͣ�Ȼ����ȡַ 
}								   //���Ҫ����a��b�������� 
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
