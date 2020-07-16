#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a;
    cin >>b;
    if(a>=-1000&&a<=1000&&b>=-1000&&b<=1000){
        cout << a+b;
    }
    else
        cout <<"输入不符合要求"<< endl;
}