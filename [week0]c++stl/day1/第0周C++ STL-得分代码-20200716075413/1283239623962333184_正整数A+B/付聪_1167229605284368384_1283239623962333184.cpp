#include<iostream>
using namespace std;
//123
//1   1*10+2  (1*10+2)*10+3 A = A*10+new
int main(){
	char s[100];
	bool flagA = true,flagB = true;//A,B是否合法 
	int A = 0,B = 0;//求和时的赋值变量 
	cin.getline(s,100); //getline(字符串，长度)
	int i;
	for(i = 0;s[i]!=' ';++i);//找到空格位置，i处为空格 
	
	for(int j = 0;j<i;++j){
		if(s[j]>='0'&&s[j]<='9'){
			A = A*10+(s[j]-'0');//注意s[j]目前还是字符，需要转化！!! 
		}else{
			flagA = false;
			break;
		}
	}
	if(A==0 || A>1000) flagA = false;
	
	for(int j = i+1;s[j]!='\0';++j){
		if(s[j]>='0' && s[j]<='9'){
			B=B*10+(s[j]-'0');//是数字 
		}else{
			flagB = false;
			break;
		}
	}
	if(B == 0 || B>1000)  flagB = false; //是正整数并且处在合理范围
	
	if(flagA){
		if(flagB){
			printf("%d + %d = %d",A,B,A+B);
		}else{
			printf("%d + ? = ?",A);
		}
	}else{
		if(flagB){
			printf("? + %d = ?",B);
		}else{
			printf("? + ? = ?");
		}
	} 
}