// #include <iostream>
// using namespace std;

// int str2int(string s){
//     for(int i=0; i<s.length(); i++)
//     {
//         char c = s.at(i);
//         if(i==0 && c=='0'){
//             throw invalid_argument("err");
//         }
//         if(!('0'<=c && c<='9'))
//         {
//             throw invalid_argument("err");
//         }
//     }
//     int n = stoi(s);
//     if(!(1<=n && n<=1000))
//     {
//         throw invalid_argument("err");
//     }
//     return n;
// }

// int main()
// {
//     string s_1, s_2;
//     int a, b, c;
//     cin >> s_1 >> s_2;
//     try {
//         a = str2int(s_1);
//     } catch (invalid_argument&) {
//         a = '?';
//     }
//     try {
//         b = str2int(s_2);
//     } catch (invalid_argument&) {
//         b = '?';
//     }
//     if(a=='?' || b=='?')
//     {
//         c='?';
//     }else{
//         c = a+b;
//     }

//     string a1=(a=='?')?"?":to_string(a);
//     string b1=(b=='?')?"?":to_string(b);
//     string c1=(c=='?')?"?":to_string(c);
//     cout << a1 << " + " << b1 << " = " << c1;
//     return 0;
// }

#include<iostream>
using namespace std;
//123 456
//1   1*10 + 2  (1*10+2) * 10 +3  A = A * 10 + new


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