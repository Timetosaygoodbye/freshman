#include<iostream>
using namespace std;
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(a[j]==a[i]){
				b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]==a[i]&&j!=i){
					b[j]=0;
				}
			}
		}
	for(int i=0;i<n-1;i++){
		int index=i;
		for(int j=i+1;j<n;j++){
			if(b[j]>b[index]) index=j;
		}
		swap(b[i],b[index]);
		swap(a[i],a[index]);
	} 
	
	for(int i=0;i<n-1;i++){
		if(b[i]==b[i+1]){
			if(a[i]>=a[i+1]){
				swap(a[i],a[i+1]);
			} 
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]!=0&&b[i+1]!=0){
			cout<<a[i]<<' '<<b[i]<<endl;
		}
		else if(b[i]!=0&&b[i+1]==0){
			cout<<a[i]<<' '<<b[i];
		}
	}
	return 0;
} 
