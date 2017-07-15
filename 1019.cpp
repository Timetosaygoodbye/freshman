#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int total=0;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		total++;
		if((a+b)>c){
			cout<<"Case #"<<total<<": true"<<endl;
		}
		else{
			cout<<"Case #"<<total<<": false"<<endl;
		}
	}
	return 0;
} 
