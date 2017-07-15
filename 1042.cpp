#include<iostream>
using namespace std;
int main(){
	int n;
	int total=0;
	while(1){
		cin>>n;
		if(n==0) break;
		else{
			total++;
			string name[n];
			for(int i=0;i<n;i++){
				cin>>name[i];
			}
			bool flag=true;
			string name1[n];
			int k=n-1;
			int p=0;
			for(int i=0;i<n;i++){
				if(flag==true){
					name1[p]=name[i];
					p++;
					flag=false;
				}
				else{
					name1[k]=name[i];
					k--;
					flag=true;
				}
			}
			cout<<"set-"<<total<<endl;
			for(int i=0;i<n;i++){
				cout<<name1[i]<<endl;
			}
		}
	}
	return 0;
}
