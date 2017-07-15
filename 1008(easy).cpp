#include<iostream>
using namespace std;
int Joseph(int n,int m){
	if(n<=0||m<=0){
    	cout<<"error!"<<endl;
        return -1;
    }
	else{
		if(n==1) return 0;
		else return ((Joseph(n-1,m)+m)%n);
    }
}

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		else{
			cout<<Joseph(n,m)+1<<endl;
		}
	}
	return 0;
}
