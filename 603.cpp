#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,f;
    cin>>n;
    s=(n/60)%24;
    f=n%60;
    if(s<10){
        if(f<10){
            cout<<0<<s<<":"<<0<<f<<endl;
        }else{
            cout<<0<<s<<":"<<f<<endl;
        }
    }else{
        //小时是两位数
        if(f<10){
            cout<<s<<":"<<0<<f<<endl;
        }else{
            cout<<s<<":"<<f<<endl;
        }
    }
    return 0;
}