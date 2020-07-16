#include<iostream>
using namespace std;

int main(){
	char s[100] ;
	bool flagA=true,flagB=true;
	int a=0,b=0;
	cin.getline(s,100);
	int i=0,j=0;
	for(i=0;s[i]!=' ';++i);
	for(j=0;j< i;++j)
	{
		if(s[j]>='0'&&s[j]<='9')
		{
			a=a*10+(s[j]-'0');
		}
		else
		{
			flagA=false;
			break;
		}
	}
	if(a==0||a>1000) flagA=false;
	for(j=i+1;s[j]!='\0';++j)
	{
		if(s[j]>='0'&&s[j]<='9')
		{
			b=b*10+(s[j]-'0');
		}
		else
		{
			flagB=false;
			break;
		}
	}
	if(b==0||b>1000) flagB=false;
	if(flagA)
	{
		if(flagB)
		{
			cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
		else
		{
			cout<<a<<" + ? = ?"<<endl;
		}
	}
	else
	{
		if(flagB)
		{
			cout<<"? + "<<b<<" = ?"<<endl;
		}
		else
		{
			cout<<"? + ? = ?"<<endl;
		}
    }
} 