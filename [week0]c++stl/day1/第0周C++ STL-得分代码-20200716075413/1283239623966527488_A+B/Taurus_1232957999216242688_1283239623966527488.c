#include<stdio.h>
#include<math.h>> 
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    if(abs(a)<=1000&&abs(b)<=1000)
        printf("%d",a+b);
}