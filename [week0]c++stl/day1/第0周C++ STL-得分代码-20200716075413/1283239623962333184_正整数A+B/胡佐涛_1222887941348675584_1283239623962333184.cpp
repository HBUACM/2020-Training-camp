#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int checknum(char* s);//判断是否是数，是则返回num，不是则返回-1

int main()
{
    char a[10000], b[10000];//录入A和B
    cin >> a;
    getchar();
    cin.getline(b, 10000);
    int p, q;//p为A的数，q为B的数
    p = checknum(a);
    q = checknum(b);
    if (p == -1)
        cout << "? + ";
    else
        cout << p << " + ";
    if (q == -1)
        cout << "? = ";
    else
        cout << q << " = ";
    if (p == -1 || q == -1)
        cout << '?';
    else
        cout << p + q;
    return 0;
}
int checknum(char* s)//判断是否是数，是则返回num，不是则返回-1
{
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            sum = sum * 10 + s[i] - '0';
        else
            return -1;
    }
    if (sum >= 1 && sum <= 1000)
        return sum;
    else
        return -1;
}
