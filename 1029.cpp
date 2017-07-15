#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int number[n],grade[n];
	for(int i=0;i<n;i++){
		cin>>number[i]>>grade[i];
	}
	int maxnumber=0;
	for(int i=0;i<n;i++){
		if(number[i]>maxnumber){
			maxnumber=number[i];
		}
	}
	
	int truth[maxnumber];
	for(int i=0;i<maxnumber;i++){
		truth[i]=0;
	}
	for(int j=1;j<=maxnumber;j++){
		for(int i=0;i<n;i++){
			if(number[i]==j) truth[j-1]+=grade[i];
		}
	}
	int max=0;
	int Number=0;
	for(int i=0;i<maxnumber;i++){
		if(truth[i]>max){
		max=truth[i];
		Number=i+1;
		}
	}
	cout<<Number<<' '<<max;
	return 0;
}
