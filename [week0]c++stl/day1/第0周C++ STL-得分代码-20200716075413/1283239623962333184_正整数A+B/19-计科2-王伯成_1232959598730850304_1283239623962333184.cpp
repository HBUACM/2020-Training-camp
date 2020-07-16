#include <iostream>
#include <string>

using namespace std;

bool if_dig(string& str) {
	int len = str.size();
	if (len > 4) {
		return false;
	}
	for (int i = 0; i < len; i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	if (stoi(str) > 1000|| stoi(str)==0) {
		return false;
	}
	return true;
}

int main() {
	string str1, str2;
	cin >> str1;
	cin.get();
	getline(cin, str2);
	bool ret = true;
	if (if_dig(str1)) {
		cout << str1 << " + ";
	} else {
		cout << "? + ";
		ret = false;
	}
	if (if_dig(str2)) {
		cout << str2 << " = ";
	} else {
		cout << "? = ";
		ret = false;
	}
	if (ret) {
		cout << stoi(str1) + stoi(str2) << endl;
	} else {
		cout << "?" << endl;
	}
	return 0;
}