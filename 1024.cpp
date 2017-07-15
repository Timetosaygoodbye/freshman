#include<iostream>
using namespace std;
int main(){
	char a[1000];
	cin.getline(a,1000);
	int b[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='0') b[0]++;
		else if(a[i]=='1') b[1]++;
		else if(a[i]=='2') b[2]++;
		else if(a[i]=='3') b[3]++;
		else if(a[i]=='4') b[4]++;
		else if(a[i]=='5') b[5]++;
		else if(a[i]=='6') b[6]++;
		else if(a[i]=='7') b[7]++;
		else if(a[i]=='8') b[8]++;
		else if(a[i]=='9') b[9]++;
	}
	for(int i=0;i<10;i++){
		if(b[i]!=0) cout<<i<<':'<<b[i]<<endl;
	}
	return 0;
} 
