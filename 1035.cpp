#include<iostream>
using namespace std;
void swap1(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void swap2(string &a,string &b){
	string temp=a;
	a=b;
	b=temp;
}
int main(){
	int n;
	cin>>n;
	string number[n];
	int month[n];
	int day[n];
	for(int i=0;i<n;i++){
		cin>>number[i]>>month[i]>>day[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if((month[j]>month[j+1])||((month[j]==month[j+1])&&day[j]>day[j+1])){
				swap1(month[j],month[j+1]);
				swap1(day[j],day[j+1]);
				swap2(number[j],number[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(month[i]==0) continue;
		else{
			cout<<month[i]<<' '<<day[i]<<' '<<number[i];
			for(int j=i+1;j<n;j++){
				if((month[j]==month[i])&&(day[j]==day[i])){
					cout<<' '<<number[j];
					month[j]=0;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
