#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[i]=i;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
		}
	}
	int rank=1;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			a[i]=rank;
			a[i+1]=rank;
		}
		else{
			a[i]=rank;
			rank++;
		}
		
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(b[j]>b[j+1]){
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i!=n-1) cout<<a[i]<<' ';
		else cout<<a[i];
	}
	return 0;
} 
