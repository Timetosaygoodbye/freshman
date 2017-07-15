#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string a;
	cin>>a;
	int len=a.length();
	int A[len];
	for(int i=0;i<len;i++){
		A[i]=int(a[i])-48;
	}
	sort(A,A+len);
	int count[9]={0,0,0,0,0,0,0,0,0};
	for(int i=0;i<len;i++){
		if(A[i]==1) count[0]++;
		else if(A[i]==2) count[1]++;
		else if(A[i]==3) count[2]++;
		else if(A[i]==4) count[3]++;
		else if(A[i]==5) count[4]++;
		else if(A[i]==6) count[5]++;
		else if(A[i]==7) count[6]++;
		else if(A[i]==8) count[7]++;
		else if(A[i]==9) count[8]++;
	}
	string b;
	while(cin>>b){
		int leN=b.length();
		int B[leN];
		for(int i=0;i<leN;i++){
			B[i]=int(b[i])-48;
		}
		if(leN==1){
			int temp1=B[0];
			bool judge1=false;
			for(int i=0;i<len;i++){
				if(A[i]>temp1){
					judge1=true;
					break;
				}
			}
			if(judge1==true){
				cout<<"YES";
				for(int i=0;i<len;i++){
					if(A[i]>temp1){
						cout<<' '<<A[i];
					}
				}
			}
			else{
				cout<<"NO";
			}
			cout<<endl;
		}
		else if(leN==2){
			int temp2=B[0];
			bool judge2=false;
			for(int i=0;i<9;i++){
				if((i+1)>temp2&&count[i]>=2){
					judge2=true;
					break;
				}
			}
			if(judge2==true){
				cout<<"YES";
				for(int i=0;i<9;i++){
					if((i+1)>temp2&&count[i]>=2){
						cout<<' '<<i+1<<i+1;
					}
				}
			}
			else{
				cout<<"NO";
			}
			cout<<endl;
		}
		else if(leN==3){
			int temp3=B[0];
			bool judge3=false;
			for(int i=0;i<9;i++){
				if((i+1)>temp3&&count[i]>=3){
					judge3=true;
					break;
				}
			}
			if(judge3==true){
				cout<<"YES";
				for(int i=0;i<9;i++){
					if((i+1)>temp3&&count[i]>=3){
						cout<<' '<<i+1<<i+1<<i+1;
					}
				}
			}
			else{
				cout<<"NO";
			}
			cout<<endl;
		}
		else if(leN==4){
			int temp4=B[0];
			bool judge4=false;
			for(int i=0;i<9;i++){
				if((i+1)>temp4&&count[i]>=4){
					judge4=true;
					break;
				}
			}
			if(judge4==true){
				cout<<"YES";
				for(int i=0;i<9;i++){
					if((i+1)>temp4&&count[i]>=4){
						cout<<' '<<i+1<<i+1<<i+1<<i+1;
					}
				}
			}
			else{
				cout<<"NO";
			}
			cout<<endl;
		}
		else if(leN==5){
			int temp5=B[0];
			bool judge5=false;
			if(temp5==1){
				if((count[1]>=1&&count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1)||(count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1)||(count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1)||(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1)){
					judge5=true;
				}
				if(judge5==true){
					cout<<"YES";
					if(count[1]>=1&&count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1) cout<<" 23456";
					if(count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1) cout<<" 34567";
					if(count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1) cout<<" 45678";
					if(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1) cout<<" 56789";
				}
				else{
					cout<<"NO";
				}
				cout<<endl;
			}
			else if(temp5==2){
				if((count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1)||(count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1)||(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1)){
					judge5=true;
				}
				if(judge5==true){
					cout<<"YES";
					if(count[2]>=1&&count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1) cout<<" 34567";
					if(count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1) cout<<" 45678";
					if(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1) cout<<" 56789";
				}
				else{
					cout<<"NO";
				}
				cout<<endl;
			}
			else if(temp5==3){
				if((count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1)||(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1)){
					judge5=true;
				}
				if(judge5==true){
					cout<<"YES";
					if(count[3]>=1&&count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1) cout<<" 45678";
					if(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1) cout<<" 56789";
				}
				else{
					cout<<"NO";
				}
				cout<<endl;
			}
			else if(temp5==4){
				if(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1){
					judge5=true;
				}
				if(judge5==true){
					cout<<"YES";
					if(count[4]>=1&&count[5]>=1&&count[6]>=1&&count[7]>=1&&count[8]>=1) cout<<" 56789";
				}
				else{
					cout<<"NO";
				}
				cout<<endl;
			}
			else if(temp5>=5){
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
