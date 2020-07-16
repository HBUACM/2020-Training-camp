#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s, 100);
    //找到空格
    int spaceI = 0;
    for (spaceI = 0; s[spaceI] != ' '; spaceI++)
        ;

    bool flagA = true, flagB = true;
    int A = 0, B = 0;
    for (int i = 0; i < spaceI; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
        {
            A = A * 10 + s[i] - '0';
        }
        else
        {
            flagA = false;
            break;
        }
    }
    if (A < 1 || A > 1000)
    {
        flagA = false;
    }
    for (int i = spaceI + 1; s[i] != '\0'; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
        {
            B = B * 10 + s[i] - '0';
        }
        else
        {
            flagB = false;
            break;
        }
    }
    if (B < 1 || B > 1000)
    {
        flagB = false;
    }

    if (flagA)
    {
        if (flagB)
        {
            printf("%d + %d = %d", A, B, A + B);
        }
        else
        {
            printf("%d + ? = ?", A);
        }
    }
    else
    {
        if (flagB)
        {
            printf("? + %d = ?", B);
        }
        else
        {
            printf("? + ? = ?");
        }
    }
}