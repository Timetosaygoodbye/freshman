#include<iostream>
using namespace std;
int main(){
	string a;
	while(cin>>a){
		int count=0;
		for(int i=0;a[i]!='B';i++){
			if(a[i]=='('&&a[i+1]!=')') count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
