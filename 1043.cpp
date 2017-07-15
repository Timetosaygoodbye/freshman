#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int xuefen[n],grade[n];
	float jidian[n];
	for(int i=0;i<n;i++){
		cin>>xuefen[i];
	}
	for(int i=0;i<n;i++){
		cin>>grade[i];
	}
	for(int i=0;i<n;i++){
		if(grade[i]>=90&&grade[i]<=100) jidian[i]=4.0;
		else if(grade[i]>=85&&grade[i]<=89) jidian[i]=3.7;
		else if(grade[i]>=82&&grade[i]<=84) jidian[i]=3.3;
		else if(grade[i]>=78&&grade[i]<=81) jidian[i]=3.0;
		else if(grade[i]>=75&&grade[i]<=77) jidian[i]=2.7;
		else if(grade[i]>=72&&grade[i]<=74) jidian[i]=2.3;
		else if(grade[i]>=68&&grade[i]<=71) jidian[i]=2.0;
		else if(grade[i]>=64&&grade[i]<=67) jidian[i]=1.5;
		else if(grade[i]>=60&&grade[i]<=63) jidian[i]=1.0;
		else if(grade[i]<60) jidian[i]=0;
	}
	float xuefenjidian[n];
	for(int i=0;i<n;i++){
		xuefenjidian[i]=jidian[i]*xuefen[i];
	}
	float totalxuefenjidian=0;
	int totalxuefen=0;
	for(int i=0;i<n;i++){
		totalxuefenjidian+=xuefenjidian[i];
		totalxuefen+=xuefen[i];
	}
	float gpa=totalxuefenjidian/totalxuefen;
	cout<<fixed<<setprecision(2)<<gpa;
	return 0;
}
