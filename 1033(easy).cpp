#include<iostream>
using namespace std;
int main(){
	int x,y,m,n,l;
	int i=0;
	cin>>x>>y>>m>>n>>l;
	if(m==n){
		cout<<"Impossible";
	}
	else{
		while(x!=y){
			if(x>l) x-=l;
			if(y>l) y-=l;
			x+=m;
			y+=n;
			i++;
		}
		cout<<i;
	}
	return 0;
}
