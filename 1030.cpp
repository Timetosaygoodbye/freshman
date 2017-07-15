#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[1000],b[1000];
	cin.getline(a,1000);
	cin.getline(b,1000);
	bool judge=true;
	int lengtha=strlen(a);
	int lengthb=strlen(b); 
	bool c[lengthb];
	for(int i=0;i<lengthb;i++){
		c[i]=false;
	}
	for(int i=0;i<lengthb;i++){
		for(int j=0;j<lengtha;j++){
			if(a[j]==b[i]){
				c[i]=true;
				a[j]='!';
				break;
			}
		}
	}
	for(int i=0;i<lengthb;i++){
		if(c[i]==false) judge=false;
	}
	
	if(judge==true){
		cout<<"Yes "<<lengtha-lengthb;
	}
	else{
		int lost=0;
		for(int i=0;i<lengthb;i++){
			if(c[i]==false) lost++;
		}
		cout<<"No "<<lost;
	}
	return 0;
}
