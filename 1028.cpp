#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string P,A;
	cin>>P>>A;
	int PG[8]={-1,-1,-1,-1,-1,-1,-1,-1},PS[2]={-1,-1},PK[2]={-1,-1};
	int AG[8]={-1,-1,-1,-1,-1,-1,-1,-1},AS[2]={-1,-1},AK[2]={-1,-1};
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int temp1=0,temp2=0;
	for(int i=0;P[i]!='.';i++){
		PG[a]=int(P[i])-48;
		a++;
		temp1=i;
	}
	temp1+=2;
	for(int i=temp1;P[i]!='.';i++){
		PS[b]=int(P[i])-48;
		b++;
		temp1=i;
	}
	temp1+=2;
	for(int i=temp1;i<P.length();i++){
		PK[c]=int(P[i])-48;
		c++;
	}
	
	for(int i=0;A[i]!='.';i++){
		AG[d]=int(A[i])-48;
		d++;
		temp2=i;
	}
	temp2+=2;
	for(int i=temp2;A[i]!='.';i++){
		AS[e]=int(A[i])-48;
		e++;
		temp2=i;
	}
	temp2+=2;
	for(int i=temp2;i<A.length();i++){
		AK[f]=int(A[i])-48;
		f++;
	}
	

	int pg=0;int ps=0;int pk=0;
	int ag=0;int as=0;int ak=0;
	int x1=0;int x2=0;int x3=0;
	int x4=0;int x5=0;int x6=0;
	
	for(int i=0;PG[i]!=-1&&i<8;i++){
		x1=i;
	}
	for(int i=0;PG[i]!=-1&&i<8;i++){
		pg+=PG[i]*pow(10,x1);
		x1--;
	}
	
	 
	for(int i=0;PS[i]!=-1&&i<2;i++){
		x2=i;
	}
	for(int i=0;PS[i]!=-1&&i<2;i++){
		ps+=PS[i]*pow(10,x2);
		x2--;
	}
	
	for(int i=0;PK[i]!=-1&&i<2;i++){
		x3=i;
	}
	for(int i=0;PK[i]!=-1&&i<2;i++){
		pk+=PK[i]*pow(10,x3);
		x3--;
	}
	
	
	for(int i=0;AG[i]!=-1&&i<8;i++){
		x4=i;
	}
	for(int i=0;AG[i]!=-1&&i<8;i++){
		ag+=AG[i]*pow(10,x4);
		x4--;
	}
	
	
	for(int i=0;AS[i]!=-1&&i<2;i++){
		x5=i;
	}
	for(int i=0;AS[i]!=-1&&i<2;i++){
		as+=AS[i]*pow(10,x5);
		x5--;
	}
	
	
	for(int i=0;AK[i]!=-1&&i<2;i++){
		x6=i;
	}
	for(int i=0;AK[i]!=-1&&i<2;i++){
		ak+=AK[i]*pow(10,x6);
		x6--;
	}
	
	int result;
	result=(ag*17*29+as*29+ak)-(pg*17*29+ps*29+pk);
	int G=0,S=0,K=0;
	K=result%29;
	int Stemp=result/29;
	S=Stemp%17;
	G=Stemp/17;
	if(result<0) cout<<G<<'.'<<-S<<'.'<<-K;
	else cout<<G<<'.'<<S<<'.'<<K;
	return 0;
}
