#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void swap(char &a,char &b){
	char c=a;
	a=b;
	b=c;
} 
int main(){
	string a;//a- ‰»Î£ªb-≈–∂œ£ªc-≈≈–Ú£ªd- ‰≥ˆ£ª 
	getline(cin,a);
	int len=a.length();
	bool b[200]={0};
	char c[200];
	char d[200];
	int j=0;
	for(int i=0;i<len;i++){
		if(int(a[i])>=65&&int(a[i])<=90){
			b[i]=1;
			c[j]=a[i];
			j++;
		}
	}
	j--;
	
	if(j!=-1){
	for(int p=0;p<j;p++){
		for(int q=0;q<j;q++){
			if(int(c[q])>int(c[q+1])){
				swap(c[q],c[q+1]);
			}
		}
	}
	int k=0;
	for(int i=0;i<len;i++){
		if(b[i]==1){
			d[i]=c[k];
			k++;
		}
		else{
			d[i]=a[i];
		}
	}
	
	}
	
	else{
		for(int i=0;i<len;i++){
			d[i]=a[i];
		}
	}
	
	for(int i=0;i<len;i++){
		cout<<d[i];
	}
	
	return 0;
}
