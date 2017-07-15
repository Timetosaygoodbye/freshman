#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int len=a.length();
	int b[len];
	for(int i=0;i<len;i++){
		b[i]=int(a[i])-48;
	}
	int total=0;
	for(int i=0;i<len;i++){
		total+=b[i];
	}
	int c[3]={0,0,0};
	int j=0;
	while(total/10>0){
		c[j]=total%10;
		total=total/10;
		j++;
	} 
	c[j]=total;
	int d[j+1];
	for(int i=0;i<j+1;i++){
		d[i]=c[i];
	}
	if(j==0){
		switch(d[0]){
			case 0:cout<<"ling";break;
			case 1:cout<<"yi";break;
			case 2:cout<<"er";break;
			case 3:cout<<"san";break;
			case 4:cout<<"si";break;
			case 5:cout<<"wu";break;
			case 6:cout<<"liu";break;
			case 7:cout<<"qi";break;
			case 8:cout<<"ba";break;
			case 9:cout<<"jiu";break;
		}
	}
	else if(j==1){
		int temp=d[0];
		d[0]=d[1];
		d[1]=temp;
		switch(d[0]){
			case 0:cout<<"ling"<<' ';break;
			case 1:cout<<"yi"<<' ';break;
			case 2:cout<<"er"<<' ';break;
			case 3:cout<<"san"<<' ';break;
			case 4:cout<<"si"<<' ';break;
			case 5:cout<<"wu"<<' ';break;
			case 6:cout<<"liu"<<' ';break;
			case 7:cout<<"qi"<<' ';break;
			case 8:cout<<"ba"<<' ';break;
			case 9:cout<<"jiu"<<' ';break;
		}
		switch(d[1]){
			case 0:cout<<"ling";break;
			case 1:cout<<"yi";break;
			case 2:cout<<"er";break;
			case 3:cout<<"san";break;
			case 4:cout<<"si";break;
			case 5:cout<<"wu";break;
			case 6:cout<<"liu";break;
			case 7:cout<<"qi";break;
			case 8:cout<<"ba";break;
			case 9:cout<<"jiu";break;
		}
	}
	else if(j==2){
		int temp=d[0];
		d[0]=d[2];
		d[2]=temp;
		switch(d[0]){
			case 0:cout<<"ling"<<' ';break;
			case 1:cout<<"yi"<<' ';break;
			case 2:cout<<"er"<<' ';break;
			case 3:cout<<"san"<<' ';break;
			case 4:cout<<"si"<<' ';break;
			case 5:cout<<"wu"<<' ';break;
			case 6:cout<<"liu"<<' ';break;
			case 7:cout<<"qi"<<' ';break;
			case 8:cout<<"ba"<<' ';break;
			case 9:cout<<"jiu"<<' ';break;
		}
		switch(d[1]){
			case 0:cout<<"ling"<<' ';break;
			case 1:cout<<"yi"<<' ';break;
			case 2:cout<<"er"<<' ';break;
			case 3:cout<<"san"<<' ';break;
			case 4:cout<<"si"<<' ';break;
			case 5:cout<<"wu"<<' ';break;
			case 6:cout<<"liu"<<' ';break;
			case 7:cout<<"qi"<<' ';break;
			case 8:cout<<"ba"<<' ';break;
			case 9:cout<<"jiu"<<' ';break;
		}
		switch(d[2]){
			case 0:cout<<"ling";break;
			case 1:cout<<"yi";break;
			case 2:cout<<"er";break;
			case 3:cout<<"san";break;
			case 4:cout<<"si";break;
			case 5:cout<<"wu";break;
			case 6:cout<<"liu";break;
			case 7:cout<<"qi";break;
			case 8:cout<<"ba";break;
			case 9:cout<<"jiu";break;
		}
	}
	return 0;
}
