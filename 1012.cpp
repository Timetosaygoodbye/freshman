#include<iostream>
using namespace std;
/*±í£º
0:1,7,8;
1:0,1,3,4,7,8,9;
2:2,8;
3:1,3,7,8,9;
4:1,4,8,9;
5:5,6,8,9;
6:5,6,8;
7:0,1,3,7,8,9;
8:0,1,2,3,4,5,6,7,8,9;
9:1,3,4,5,7,8,9;
*/ 
int main(){
	while(1){
		int a[10];
		bool judge=true;
		for(int i=0;i<10;i++){
			cin>>a[i];
		}
		if(cin.get()==-1) break;
		else{
			for(int i=0;i<9;i++){
				if(a[i]==0)
					if(a[i+1]!=1&&a[i+1]!=7&&a[i+1]!=8) judge=false;
				else if(a[i]==1)
					if(a[i+1]!=0&&a[i+1]!=1&&a[i+1]!=3&&a[i+1]!=4&&a[i+1]!=7&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==2)
					if(a[i+1]!=2&&a[i+1]!=8) judge=false;
				else if(a[i]==3)
					if(a[i+1]!=1&&a[i+1]!=3&&a[i+1]!=7&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==4)
					if(a[i+1]!=1&&a[i+1]!=4&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==5)
					if(a[i+1]!=5&&a[i+1]!=6&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==6)
					if(a[i+1]!=5&&a[i+1]!=6&&a[i+1]!=8) judge=false;
				else if(a[i]==7)
					if(a[i+1]!=0&&a[i+1]!=1&&a[i+1]!=3&&a[i+1]!=7&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==8)
					if(a[i+1]!=0&&a[i+1]!=1&&a[i+1]!=2&&a[i+1]!=3&&a[i+1]!=4&&a[i+1]!=5&&a[i+1]!=6&&a[i+1]!=7&&a[i+1]!=8&&a[i+1]!=9) judge=false;
				else if(a[i]==9)
					if(a[i+1]!=1&&a[i+1]!=3&&a[i+1]!=4&&a[i+1]!=5&&a[i+1]!=7&&a[i+1]!=8&&a[i+1]!=9) judge=false;
			}
			
			if(judge==true) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}
