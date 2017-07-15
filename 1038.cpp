#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		int tempa=0,tempb=0;
		for(int j=1;j<a;j++){
			if(a%j==0) tempa+=j;
		}
		for(int z=1;z<b;z++){
			if(b%z==0) tempb+=z;
		}
		if(tempa==b&&tempb==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 
