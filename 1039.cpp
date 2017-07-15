#include<iostream>
#include<cstdlib>
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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	int min=a[0];
	int max=a[n-1];
	int temp=abs(abs(a[0]-max)-(a[0]-min));
	int flag=a[0];
	for(int i=0;i<n;i++){
		int f=abs(abs(a[i]-max)-(a[i]-min));
		if(f<temp) {
			flag=a[i];
			temp=f;	
		}
	}
	cout<<flag;
	return 0;
}
