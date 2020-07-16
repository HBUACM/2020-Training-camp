#include<iostream>
#include<sstream>
#include<string>
using namrspace std;
int main(){
    string a,b;
    cin>>a>>b;
    bool c,d;
    for(auto x : a){
        if(!isdigit(x)){
            c=true;
            a = '?';
            break;
        }
    }
    for(auto x : b){
        if(!isdigit(x)){
            d=true;
            b = '?';
            break;
        }
    }
    if(c==false&&d==false){
        printf("%s + %s = %d",a,b,stoi(a)+stoi(b));
    }else{
        printf("%s + %s = ?",a,b);
    }
    return 0;
}