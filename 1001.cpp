#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m],b[m][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][m-1-i];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==m-1&&j==n-1) cout<<b[i][j];
			else if(j==n-1&&i!=m-1)cout<<b[i][j]<<endl;
			else cout<<b[i][j]<<' ';
		}
	}
	return 0;
} 
