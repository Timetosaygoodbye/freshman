#include<iostream>
using namespace std;
int sum(int *a,int *b,int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i]*b[i];
	}
	return s;
}
int main(){
	string a;
	int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	while(1){
		cin>>a;
		if(a=="-1") break;
		else{
			int b[17];
			for(int i=0;i<17;i++){
				b[i]=int(a[i])-48;
			}
			int s=sum(b,w,17);
			int y=s%11;
			if(y==0&&a[17]=='1') cout<<'1'<<endl;
			else if(y==1&&a[17]=='0') cout<<'1'<<endl;
			else if(y==2&&a[17]=='X') cout<<'1'<<endl;
			else if(y==3&&a[17]=='9') cout<<'1'<<endl;
			else if(y==4&&a[17]=='8') cout<<'1'<<endl;
			else if(y==5&&a[17]=='7') cout<<'1'<<endl;
			else if(y==6&&a[17]=='6') cout<<'1'<<endl;
			else if(y==7&&a[17]=='5') cout<<'1'<<endl;
			else if(y==8&&a[17]=='4') cout<<'1'<<endl;
			else if(y==9&&a[17]=='3') cout<<'1'<<endl;
			else if(y==10&&a[17]=='2') cout<<'1'<<endl;
			else cout<<'0'<<endl;
		}
	}
	return 0;
}
