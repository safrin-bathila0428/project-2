#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter your mark:";
	cin>>num;
	cout<<"\nyou entered:"<<num;
	if(num>=80)
	{
		cout<<"you got grade A";
	}
	else if(num>=60)
	{
		cout<<"you got grade B";
	}
	else if(num>=40)
	{
		cout<<"you got grade c";
	}
	else if(num<40)
	{
		cout<<"you failed";
	}
	return 0;
}

