/*成绩排序*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;
struct Student
{
	char name[101];
	int age;
	int score;
}buf[1000];

int cmp(const void *a,const void *b)
{
	struct Student *c = (Student *)a;
	struct Student *d = (Student *)b;
	if(c->score!=d->score) return c->score>d->score; //这是升序 
	int tmp = strcmp(c->name,d->name);
	if(tmp!=0) return tmp>0;//若分数相同则按名字排序，小者在前 
	else return c->age-d->age;
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);  //输入 
		}
		qsort(buf,n,sizeof(buf[0]),cmp);
		for(int i=0;i<n;i++)
		{
			printf("%s\t%d\t%d\n",buf[i].name,buf[i].age,buf[i].score);
		}
	}
	printf("\n");
}
