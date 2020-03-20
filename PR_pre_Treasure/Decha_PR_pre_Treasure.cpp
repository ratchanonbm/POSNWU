#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
#include<iomanip>
using namespace std;
int main()
{
	int count=0,num1=0,k;
	double x=0,y=0;
	string str;
	string num;
	string direct;
	std::string::iterator it1;
	//input string num+direct
	cin>>str;
	while(str!="*")
	{
		//count number of num
		for (it1=str.begin(); it1!=str.end(); it1++)
		{
			if(*it1>=48&&*it1<=57)
			{
				count++;
			}
		}
		//exit num and direct
		num= " ";
		for (k=0;k<count;k++)
		{
			 num = num + str[k];
			 stringstream obj(num);
			 obj >> num1;

		}
		for(int l=count;l<str.length();l++)
		{
			direct = direct + str[l];
		}
		//check direct

		if(direct=="N")
		{
			y+=num1;
		}
		else if(direct=="S")
		{
			y-=num1;
		}
		else if(direct=="E")
		{
			x+=num1;
		}
		else if(direct=="W")
		{
			x-=num1;
		}
		else if(direct=="NE")
		{
			x+=sqrt((num1*num1)/2);
			y+=sqrt((num1*num1)/2);
		}
		else if(direct=="NW")
		{
			x-=sqrt((num1*num1)/2);
			y+=sqrt((num1*num1)/2);
		}
		else if(direct=="SE")
		{
			x+=sqrt((num1*num1)/2);
			y-=sqrt((num1*num1)/2);
		}
		else if(direct=="SW")
		{
			x-=sqrt((num1*num1)/2);
			y-=sqrt((num1*num1)/2);
		}
		direct.clear();
		count=0;
		cin >> str;
	}
	double dis = sqrt((x*x)+(y*y));
	cout<<fixed;
	cout<<setprecision(3)<<x<<" "<<setprecision(3)<<y<<endl<<setprecision(3)<<dis;
}
