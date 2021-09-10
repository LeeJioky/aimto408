 #include<iostream>
 #include<sstream>
 using namespace std;
 
 bool isNumber(const string& str)
 {
 	for(char const&c:str)
 	{
 		if(isdigit(c)==0) return false;
	 }
	 return true; 
 }
 
 int main()
 {
 	string str;
 	cout<<"ÇëÊäÈëx£º"<<endl;
 	while(true)
 	{
 		cin>>str;
	 	if(isNumber(str))
	 	{
	 		stringstream ss;
	 		ss<<str;
	 		int tmp;
	 		ss>>tmp;
	 		if(tmp>=10000&&tmp<=INT_MAX)
	 		{
	 			cout<<"x="<<str<<endl;
	 			break;
			 }	 		
		 }
	 }
 	
	return 0;
 }
