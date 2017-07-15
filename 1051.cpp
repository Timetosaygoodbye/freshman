#include<iostream>
using namespace std;
int main(){
	int m=0;
	string a,b;
	string A[100000],B[100000];
	while(1){
		cin>>a;
		getchar();
		if(a=="@END@") break;
		else{
			getline(cin,b);
			A[m]=a;
			B[m]=b;
			m++;
		}
	}
	int N;
	cin>>N;
	getchar();
	for(int i=0;i<N;i++){
		string aim;
		getline(cin,aim);
		bool judge=false;
		for(int j=0;j<m;j++){
			if(A[j]==aim){
				judge=true;
				cout<<B[j]<<endl;
			}
			else if(B[j]==aim){
				judge=true;
				int len=A[j].length();
				for(int p=1;p<len-1;p++){
					cout<<A[j][p];
				}
				cout<<endl;
			}
		}
		if(judge==false){
			cout<<"what?"<<endl;
		}
	}
	return 0;
}
