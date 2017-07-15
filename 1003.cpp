#include<iostream>
using namespace std;
int main(){
	int n;
	int total=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int b=a[i]+1,c=a[i]-1;
		for(int j=0;j<n;j++){
			if(a[j]==b||a[j]==c){
				total++;
			}
		}
	}
	int d=total/2;
	cout<<d;
	return 0;
}
