#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int parseint(string s) {
	int ret = 0;
	if (s.length() > 10)
		return -1;
	for (int i = 0; i < s.length(); i++) {
		if (!isdigit(s[i]))
			return -1;
		else
			ret = ret * 10 + s[i] - '0';
	}
	if (ret > 1000 || ret == 0)
		return -1;
	return ret;
}
int main() {
	string s1, s2;
	cin >> s1;
	getchar();
	getline(cin, s2);
	if (parseint(s1) == -1)
	{
		cout << "? + ";
		if (parseint(s2) == -1)
			cout << "? = ?";
		else
			cout << parseint(s2) << " = ?";
	}
	else
	{
		cout << parseint(s1) << " + ";
		if (parseint(s2) == -1)
			cout << "? = ?";
		else {
			long long ll = parseint(s1) + parseint(s2);
			/*if (ll > 2147483647)
				cout << parseint(s2) << " = ?";
			else*/
			cout << parseint(s2) << " = " << parseint(s1) + parseint(s2);
		}
	}
	return 0;
}