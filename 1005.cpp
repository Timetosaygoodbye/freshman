#include<iostream>
using namespace std;
bool find1(char *key,char *aim){
	char *k;
	char *a=aim;
	while(1){
		k=key;
		while(*a!=*k&&*a!='\0')
		a++;
		if(*a=='\0') return false;
		while(*a==*k&&*a!='\0'&&*k!='\0')
			a++,k++;
			if(*k=='\0') return true;
	}	
}

bool find2(char *key,char *aim){
	char *k;
	char *a=aim;
	while(1){
		k=key;
		while(tolower(*a)!=tolower(*k)&&*a!='\0')
		a++;
		if(*a=='\0') return false;
		while(tolower(*a)==tolower(*k)&&*a!='\0'&&*k!='\0')
			a++,k++;
			if(*k=='\0') return true;
	}	
}

int main(){
	char key[101],str[101];
	cin>>key;
	int judge;
	cin>>judge;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		if(i!=n-1){
		if(judge==0)
			if(1==find2(key,str)) cout<<str<<endl;
		if(judge==1)
			if(1==find1(key,str)) cout<<str<<endl;
		}
		if(i==n-1){
		if(judge==0)
			if(1==find2(key,str)) cout<<str;
		if(judge==1)
			if(1==find1(key,str)) cout<<str;
		}
	}
	return 0;
}
