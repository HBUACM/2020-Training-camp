#include<iostream>
using namespace std;


int main(){
	char s[100];
	bool flagA = true , flagB =true;
	int A = 0 , B = 0;
	
	cin.getline(s,100);
	int i;
	for( i=0 ; s[i]!=' ';++i);
	
	for( int j=0 ; j< i ;++j ){
		if(s[j] >='0' && s[j] <='9'){
			A = A * 10 + (s[j]-'0');
		} else{
			flagA = false; 
			break;
		}
	} 
	if(A ==0 || A >1000) flagA = false;
	
	for( int j=i+1 ; s[j]!='\0' ;++j ){
		if(s[j] >='0' && s[j] <='9'){
			B = B * 10 + (s[j]-'0');
		} else{
			flagB = false; 
			break;
		}
	} 
	if(B ==0 || B >1000) flagB = false;
	
	if(flagA){
		if(flagB){
			printf("%d + %d = %d",A,B,A+B);
		}else{
			printf("%d + ? = ?",A);
		}
	} else{
		if(flagB){
			printf("? + %d = ?",B);
		}else{
			printf("? + ? = ?");
		}
	}
	
}