#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    char s[100];
    int a=0,b=0;
    bool fa = true ,fb = true ;
    cin.getline(s,100);
    int i;
    for( i=0;s[i]!=' ';++i);
    for( int j=0;j<i;++j)
	{
    	if(s[j]>='0' && s[j]<='9')
		{
			a=a * 10 + (s[j]-'0');
		}
		else
		{          
		 	fa = false;
			break;
		} 
	}
	if(a==0 || a>1000 )
		fa = false;
	for( int j=i+1 ; s[j]!='\0' ;++j )
	{
    	if(s[j]>='0' && s[j]<='9')
		{
			b=b * 10 + (s[j]-'0');
		}
		else
		{          
		 	fb = false;
			break;
		} 
	}
	if(b==0 || b>1000 )
		fb = false;
	
	if(fa)
	{
		if(fb)
		{
			printf("%d + %d = %d",a,b,a+b);	
		}
		else
		{
			printf("%d + ? = ?",a);
		}
		
	}
	else
	{
		if(fb)
		{
			printf("? + %d = ?",b);	
		}
		else
		{
			printf("? + ? = ?");	
		}
	}
	
}