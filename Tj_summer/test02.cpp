#include<iostream>
using namespace std;

void printZiMu(int space,char cr)
{
	if(cr<'A'||cr>'Z') return;
	printZiMu(space+1,cr-1);
	for(int i=0;i<space;i++)
		cout<<" ";
	for(int i=0;i<=cr-'A';i++)
	{
		cout<<char(cr-i);
	}
	for(int i=1;i<=cr-'A';i++)
	{
		cout<<char('A'+i);
	}
	cout<<endl;
}

int main()
{
	int space = 0;
	char cr;
	cout<<"����������ַ���A-Z��:"<<endl;
	
	while(true)
	{
		cin>>cr;
		if(cr=='q') break;  //��q�˳� 
		cout<<"========================================"<<endl;
		printZiMu(space,cr);
		cout<<"========================================"<<endl;
	}
	

	
	return 0;
}
