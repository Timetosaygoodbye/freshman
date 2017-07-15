#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string name[n];
	string number[n];
	int grade[n];
	for(int i=0;i<n;i++){
		cin>>name[i]>>number[i]>>grade[i];
	}
	int max=grade[0],min=grade[0];
	int p=0,q=0;
	for(int i=0;i<n;i++){
		if(grade[i]>max){
			max=grade[i];
			p=i;	
		} 
		if(grade[i]<min){
			min=grade[i];
			q=i;
		} 
	}
	cout<<name[p]<<' '<<number[p]<<endl;
	cout<<name[q]<<' '<<number[q];
	return 0;
} 
