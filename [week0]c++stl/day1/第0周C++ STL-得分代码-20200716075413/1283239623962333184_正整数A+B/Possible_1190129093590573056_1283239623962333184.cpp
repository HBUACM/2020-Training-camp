#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool isnum(string s) {
    //题目只保证第一个非空，第二个未说，防止恶心的测试点
	if(s.length()<1)
		return false;

	for(int i = 0; i<s.length(); i++) {
		if(!isdigit(s[i]))
			return false;
	}
	if(stoi(s)<1||stoi(s)>1000)
		return false;
	return true;
}

int main() {
	string s;
	getline(cin,s);
	int i;
	for(i = 0; i<s.length(); i++) {
		if(s[i]==' ')
			break;
	}
	string a = s.substr(0,i);
	string b = s.substr(i+1);
	if(isnum(a)&&isnum(b)) {
		printf("%d + %d = %d",stoi(a),stoi(b),stoi(a)+stoi(b));
	} else if(isnum(a)&&!isnum(b)) {
		printf("%d + ? = ?",stoi(a));
	} else if(!isnum(a)&&isnum(b)) {
		printf("? + %d = ?",stoi(b));
	} else
		printf("? + ? = ?");
	return 0;
}
