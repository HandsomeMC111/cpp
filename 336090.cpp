#include<bits/stdc++.h>
using namespace std;
int baohan7(int n){
	while(n!=0)
	{
		if(n%10==7){
			return 1;
		}else{
			n=n/10;
		}	
	}
	return 0;
	
}

int main(){
	int a,b,i;
	cin>>a>>b;
	i=a;
	while(i>=b){
		 if(baohan7(i)){
		 	cout<<i<<endl;
		 }
		 i--;
	}
	return 0;
}

