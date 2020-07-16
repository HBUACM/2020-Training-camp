#include <iostream>
using namespace std;
int main()
{
	string s;
	int i=0;
	int a=0,b=0;
	bool flag1=true,flag2=true;
	cin.getline(s,100);
	for (i=s[i];i!=" ";++i)

	for(int j=0;j<i;j++){
		if(s[j]>="0"&&s[j]<="9"){
			a=a*10+s[j]-"0";
		}else  flag1=flase;
	}

	if(a<=0||a>1000)  flag1=flase;
	for(int j=i+1;s[j]!="\0";j++){
		if(s[j]>="0"&&s[j]<="9"){
			b=b*10+s[j]-"0";
		}else  flag2=flase;
	}

	if(b<=0||b>1000)  flag2=flase;
	if (flag1)
	{
		if (flag2)
		{
			printf("%d + %d = %d\n",a,b,a+b);
		}else printf("%d + ? = ?\n",a);
	}else{
		if (flag2)
		{
			printf("? + %d = ?\n",b);
		}else printf("? + ? = ?\n");
	}
	return 0;
}