#include<iostream>
using namespace std;
//дя 
int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		else{
			int m=(n*(n-1))/2;
			int num[n];
			int sum[m];
			bool mark[m];
			for(int i=0;i<n;i++){
				num[i]=0;
			}
			for(int i=0;i<m;i++){
				cin>>sum[i];
				mark[i]=false;
			}
			for(int i=2;i<m;i++){
				num[1]=(sum[0]-sum[1]+sum[i])/2;
				num[0]=sum[0]-num[1];
				num[2]=sum[1]-num[0];
				if(num[1]+num[2]!=sum[i]) continue;
				mark[i]=true;
				int k=2;
				bool flag=true;
				for(int j=3;j<n&&flag;j++){
					while(mark[k])k++;
					num[j]=sum[k]-num[0];
					mark[k]=true;
					for(int l=1;l<j-1;l++){
						for(int x=k+1;x<m;x++){
							flag=false;
							if(!mark[x]&&num[l]+num[j]==sum[x]){
								mark[x]=true;
								flag=true;
								break;
							}
						}
					}
				}
				if(flag) break;
			}
			for(int i=0;i<n-1;i++){
				cout<<num[i]<<' ';
			}
			cout<<num[n-1]<<endl;
		}
	}
	return 0;
} 
