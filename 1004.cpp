#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][4],b[101][101];
	int total=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			b[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=a[i][0];j<a[i][2];j++){
			for(int k=a[i][1];k<a[i][3];k++){
				b[j][k]++;
			}
		}
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			if(b[i][j]!=0) total++;
		}
	}
	cout<<total;
	return 0;
}
