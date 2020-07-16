#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int a,b;
    a=qwe(A);
    b=qwe(B);
    if(a<=1000&&b<=1000)
    {
        printf("%d\n",A+B);
    }
}
int qwe(int t)
{
    if(t<0)
    {
        return -t;
}
    else
    {
        return t;
    }
}