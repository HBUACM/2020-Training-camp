#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    getchar();
    getline(cin,s2);
    int flag1=0,flag2=0,sum=0;
    for(int i=0;i<s1.length();i++){
        if(!isdigit(s1[i])||stoi(s1)>1000||stoi(s1)<1){
            cout<<"? + ";
            flag1=1;
            break;
        }
    }
    if(flag1==0) cout<<s1<<" + ";
    for(int i=0;i<s2.length();i++){
        if(!isdigit(s2[i])||stoi(s2)>1000||stoi(s2)<1){
            cout<<"? = ";
            flag2=1;
            break;
        }
    }
    if(flag2==0) cout<<s2<<" = ";
    if(flag1==0&&flag2==0) cout<<stoi(s1)+stoi(s2);
    else cout<<"?";
    return 0;
}
