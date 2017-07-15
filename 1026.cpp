#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	string a;
	getline(cin,a);
	int b[50];
	for(int i=0;i<50;i++){
		b[i]=-1;
	}
	int j=0;
	for(int i=0;i<a.length();i+=2){
		b[j]=int(a[i])-48;
		j++;
	}
	int c[j];
	for(int i=0;i<j;i++){
		c[i]=b[i];
	}
	for(int i=0;i<j-1;i++){
		for(int k=0;k<j-1;k++){
			if(c[k]>c[k+1]){
				swap(c[k],c[k+1]);
			}
		}
	}
	if(c[0]==0){
		int p=0;
		while(c[p]==0){
			p++;
		}
		swap(c[0],c[p]);
	}
	for(int i=0;i<j;i++){
		cout<<c[i];
	}
	return 0;
} 
