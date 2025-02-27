#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,j;
    for(;;){
        cout<<"请输入长方体的长宽高:"<<endl;
        cin>>a>>b>>c;
         j=(a*b+a*c+b*c)*2;
        cout<<j<<endl;
    }
    return 0;
}