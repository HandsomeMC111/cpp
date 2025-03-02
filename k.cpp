#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    s=n%3;
    if(s==0){
        cout<<n<<endl;
    }
    else if(s==1){
        cout<<n-1<<endl;
    }else{
        cout<<n+1<<endl;
    }
    return 0;
}