#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	int max;
	bool flag1=true,flag2=true,flag3=false,flag4=false;
	string str1;
	string str2;
	cin >> str1;
    getchar();
	getline(cin,str2);
	str1.length()<str2.length() ? max = str2.length() : max = str1.length();
	for(int n=0;n<max;n++){
		if(n<str1.length()){
			if(str1.at(n)<48||str1.at(n)>57){
				flag1=false;
				str1="?";
			}
		}
		if(n<str2.length()){
			if(str2.at(n)<48||str2.at(n)>57){
				flag2=false;
				str2="?";
			}
		}
	}
	if(flag1==true&&flag2==true){
		int a=atof(str1.c_str());
		int b=atof(str2.c_str());		
		if(a<1||a>1000){
			flag3=true;
		}
		if(b<1||b>1000){
			flag4=true;
		}
		if(flag3==true&&flag4==true){
			cout<<"?"<<" + "<<"?"<<" = "<<"?";
		}else if(flag3==true&&flag4==false){
			cout<<"?"<<" + "<<b<<" = "<<"?";
		}else if(flag3==false&&flag4==true){
			cout<<a<<" + "<<"?"<<" = "<<"?";
		}else if(flag3==false&&flag4==false){
			cout<<a<<" + "<<b<<" = "<<a+b;
		}
	}else{
		cout<<str1<<" + "<<str2<<" = "<<"?";
	}
}