#include<iostream>
using namespace std;
int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		else{
			bool a[n];
			int z=0,s=0,t=0;
			for(int i=0;i<n;i++){
				a[i]=1;
			}
			while(z!=n){
				if(a[t]==1) s++;
				t++;
				if(t==n) t=0;
				if(s==m){
					s=0;
					t--;
					if(t==-1) t=n-1;
					a[t]=0;
					z++;
				}
			}
			
			cout<<t+1<<endl;
			}
		}
	return 0;	
	}

