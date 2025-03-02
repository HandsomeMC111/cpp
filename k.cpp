#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    s=n%5;
    if(s==0){
        cout<<n<<endl;
    }
    else if(s==1){
        cout<<n-1<<endl;
    }else if(s==2){
        cout<<n-2<<endl;
    }
    else if(s==3){
        cout<<n+2<<endl;
    }else{
         cout<<n+1<<endl;   //s==4
    }
    return 0;
}