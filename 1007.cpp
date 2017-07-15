#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int p,e,i,d;
	int n=0; 
	while(1){
		cin>>p>>e>>i>>d;
		if((p==-1)&&(e==-1)&&(i==-1)&&(d==-1)) break;
		else{
			for(int j=1;j<=21252;j++){
				if((j+d-p)%23==0&&(j+d-e)%28==0&&(j+d-i)%33==0){
					n++;
					cout<<"Case"<<' '<<n<<": the next triple peak occurs in "<<j<<" days."<<endl;
				}
			}
		}
	}
	return 0;
}
