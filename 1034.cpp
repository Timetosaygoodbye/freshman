#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0) cout<<i<<endl;
		else{
			int temp=i;
			while(temp>0){
				if(temp%10==7){
					cout<<i<<endl;
					break;
				}
				temp=temp/10;
			}
		}
	}
	return 0;
} 
