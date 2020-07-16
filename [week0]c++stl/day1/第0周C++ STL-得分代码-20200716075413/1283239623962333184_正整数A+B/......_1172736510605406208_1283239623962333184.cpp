#include<bits/stdc++.h>
using namespace std;
int main(){
	string str="";
	bool fA = true,fB = true;
	int A = 0,B = 0,i=0;
	getline(cin,str);
	for(i=0;str[i]!=' ';i++);
	for(int j=0;j<i;j++){
		if(str[j]>='0'&&str[j]<='9'){
			A = A*10 + (str[j]-'0'); 
		}else{
			fA = false;
			break;
		}
	}
	if(A<1||A>1000) fA = false;
	for(int j=i+1;str[j]!='\0';j++){
		if(str[j]>='0'&&str[j]<='9'){
			B = B*10 + (str[j]-'0'); 
		}else{
			fB = false;
			break;
		}
	}
	if(B<1||B>1000) fB = false;
	if(fA){
		if(fB){
			cout << A << " + " << B	<< " = " << A+B << endl;
		}else{
			cout << A << " + ? = ?" << endl;
		}
	}else{
		if(fB){
			cout << "? + " << B << " = ?" << endl; 
		}else{
			cout << "? + ? = ?" << endl;
		}
	}
	return 0;
}