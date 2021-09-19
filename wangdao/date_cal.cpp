#include<stdio.h>
//定义宏判断是否是闰年，方便计算每月天数 
#define ISYEAP(x) x%100!=0&&x%4==0||x%400==0?1:0
int dayOfMonth[13][2] = 
{
	0,0,
	31,31,
	28,29,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31
 } ;//预存每月的天数，注意二月配合宏定义做特殊处理，第二列表示闰年的月份 
 
 struct Date{
 	int Day;
 	int Month;
 	int Year;
 	void nextDay()
 	{
 		//计算下一天的日期
		Day++;
		if(Day>dayOfMonth[Month][ISYEAP(Year)]) 
		{
			Day = 1;
			Month++;//进入下一个月 
			if(Month>12)
			{
				Month = 1;
				Year++;//进入下一年 
			}
		}
	 }
 };
 
 int buf[5001][13][32];//保存预处理的天数
 int Abs(int x)
 {
 	//求绝对值
	 return x<0?-x:x;
  } 
  
  int main()
  {
  	Date tmp;
  	int cnt=0;//天数计数
	tmp.Day = 1;
	tmp.Month = 1;
	tmp.Year = 0; //初始化日期类对象为0年1月1日
	while(tmp.Year!=5001) 
	{
		buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
		tmp.nextDay();
		cnt++;
	}
	int d1,m1,y1;
	int d2,m2,y2;
	while(scanf("%4d%2d%2d",&y1,&m1,&d1)!=EOF)
	{
		scanf("%4d%2d%2d",&y2,&m2,&d2);//读入要计算的两个日期
		printf("%d\n",Abs(buf[y2][m2][d2])-buf[y1][m1][d1]+1); 
	}
  	return 0;  	
  }
