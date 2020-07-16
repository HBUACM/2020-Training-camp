#include<iostream>

using namespace std;

int main(){
	char s[200];
	int A = 0 , B = 0;
	int flagA = 1;
	int flagB = 1;
	int i;
	cin.getline(s,200);
	for( i=0; s[i]!=' '; ++i);
	for(int j=0; j<i; j++){
		if( s[j]<='9' && s[j]>='0' ){
			A = A*10 + (s[j]-'0');	
		} else {
			flagA = 0;
			break;
		}
	}

	if( A==0 || A>1000 ) flagA = 0;

	for(int j=i+1; s[j]!='\0'; ++j) {

		if( s[j]<='9' && s[j]>='0' ) {
				B = B*10 + (s[j]-'0');	
		} else {
				flagB = 0;
				break;
		}
	
	}

	if( B==0 || B>1000 ) flagB = 0;
	
	if( flagA==1 ){
		
		if( flagB==1 ){
			printf("%d + %d = %d\n", A, B,A+B); 
		} else {

			printf("%d + ? = ?\n", A);
		}
	}
	
	else{
		if(flagB==1){
			printf("? + %d = ?\n",B);
		} else{
			printf("? + ? = ?\n");
		}
	}
}