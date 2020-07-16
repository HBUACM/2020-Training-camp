#include <iostream>
using namespace std;
int main(){
    char g[100];
    int A=0,B=0;
    bool Fa=true,Fb=true;
    cin.getline(g,100);
    int i;//空格的位置
    for(i=0;g[i]!=' ';++i);
        for(int j=0;j<i;++j){
            if(g[j]>='0'&&g[j]<='9'){
                 A=A*10+(g[j]-'0');
            }else
            {
                Fa=false;
                break;
            }
                
            
        }    
if(A>1000||A<1) Fa=false;
    for(int j=i+1;g[j]!='\0';j++){
            if(g[j]>='0'&&g[j]<='9'){
                 B=B*10+(g[j]-'0');
            }
            else
            {
                Fb=false;
                break;
            }
                
        }    
if(B>1000||B<1) Fb=false;
    if(Fa){
        if(Fb)
            cout <<A<<" + "<<B<<" = "<<A+B<<endl;
        else if(!Fb)
             cout <<A<<" + "<<"?"<<" = "<<"?"<<endl;
    }else if(!Fa){
        if(Fb)
         cout <<"?"<<" + "<<B<<" = "<<"?"<<endl;
        else if(!Fb)
            cout <<"?"<<" + "<<"?"<<" = "<<"?"<<endl;
    }
}