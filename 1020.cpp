#include<iostream>
using namespace std;
int main(){
	char a[10],b[10];
	int da,db;
	cin>>a;
	cin>>da;
	cin>>b;
	cin>>db;
	int A[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},B[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	for(int i=0;a[i]!='\0';i++){
		A[i]=int(a[i])-48;
	} 
	for(int i=0;b[i]!='\0';i++){
		B[i]=int(b[i])-48;
	} 
	//int pa[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},pb[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int p=0,q=0;
	for(int i=0;A[i]!=-1;i++){
		if(A[i]==da){
			//pa[p]=da;
			p++;
		}
	}
	for(int i=0;B[i]!=-1;i++){
		if(B[i]==db){
			//pb[q]=db;
			q++;
		} 
	}
	int PA,PB;
	if(p==0) PA=0;
	else PA=da;
	
	if(q==0) PB=0;
	else PB=db;
	
	for(int i=1;i<p;i++) 
		PA=PA*10+da;
	for(int i=1;i<q;i++)
		PB=PB*10+db;
	cout<<PA+PB;
	return 0;
	
} 
